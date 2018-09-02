import pandas as pd

total_cadeiras = 29
QE = 12684
# Lendo csv
df = pd.read_csv("supp/eleicao.csv", sep=";",error_bad_lines=False)

df['Partido/Coligação'] = df['Partido/Coligação'].apply(lambda x : x.split('-')[1] if len(x.split('-')) > 1 else x.split()[0])

# Agrupando por partido e somando os votos
df = df.groupby(['Partido/Coligação']).sum()

# Introduzindo nova coluna QP =  Quociente partidário
df["QP"] = (df['Votos']/QE).astype(int)

vagas_a_preencher = total_cadeiras - df["QP"].sum()

# Cria nova coluna para contar as vagas que já foram
# preenchidas nas vagas residuais a serem distribuidas
df["Distribuicao"] = 0
#print(df)

numero_candidato = ""
for vaga_residual in range(0, vagas_a_preencher):
    mi = 1
    max = -1
    for row in df.itertuples():
        # Calculando Mi's
        mi = getattr(row, "Votos")/(getattr(row, "Votos")/QE+getattr(row, "Distribuicao")+1)
        # Recupera o valor máximo dos Mi's nessa iteracao
        if(mi > max):
            numero_candidato = getattr(row, "Número")
            max = mi

    # Localiza qual candidato deve receber a distribuição
    df.loc[df['Número'] == numero_candidato, 'Distribuicao'] = (df['Distribuicao']+1)

print(df)


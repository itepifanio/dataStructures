import pandas as pd

total_cadeiras = 29
QE = 12684
# Lendo csv
df = pd.read_csv("supp/eleicao.csv", sep=";",error_bad_lines=False)

separa_coligacoes = count(df['Partido/Coligação'].str.split('-').count()

df['Partido/Coligação'] = separa_coligacoes.str[1] if separa_coligacoes > 1 else 0

df['Partido/Coligação'] += df['Partido/Coligação'].str.split(' ').str[1]
# Agrupando por partido e somando os votos
df = df.groupby(['Partido/Coligação']).sum()
print(df)
# Introduzindo nova coluna QP =  Quociente partidário
df["QP"] = (df['Votos']/QE).astype(int)

vagas_a_preencher = total_cadeiras - df["QP"].sum()

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




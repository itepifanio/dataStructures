import pandas as pd

total_cadeiras = 29
QE = 12684
# Lendo csv
eleicoes_df = pd.read_csv("supp/eleicao.csv", sep=";",error_bad_lines=False)
candidatos_df = pd.read_csv("supp/eleicao.csv", sep=";",error_bad_lines=False)

eleicoes_df['Partido/Coligação'] = eleicoes_df['Partido/Coligação'].apply(
        lambda x : x.split('-')[1] if len(x.split('-')) > 1 else x.split()[0]
    )

# Agrupando por partido e somando os votos
eleicoes_df = eleicoes_df.groupby(['Partido/Coligação']).sum()

# Introduzindo nova coluna QP =  Quociente partidário
eleicoes_df["QP"] = (eleicoes_df['Votos']/QE).astype(int)

#Calculando vagas que ainda devem ser preenchidas
vagas_a_preencher = total_cadeiras - eleicoes_df["QP"].sum()
# Nova coluna para contar as vagas distribuidas
eleicoes_df["Distribuicao"] = 0

for vaga_residual in range(vagas_a_preencher):
    # Calcula as médias Mi's
    eleicoes_df['Media'] = eleicoes_df['Votos']/(eleicoes_df['QP']+eleicoes_df['Distribuicao']+1)

    # Localiza pelos votos das coligações, qual partido deve receber
    # a distribuição das vagas residuais de acordo com a média
    eleicoes_df.loc[eleicoes_df['Votos'] == (
        eleicoes_df.loc[
            eleicoes_df['Media'].idxmax()]['Votos']), 'Distribuicao'
        ] = (eleicoes_df['Distribuicao']+1
    )

# Somando o total das vagas em uma nova coluna
eleicoes_df['Total'] = eleicoes_df['QP'] + eleicoes_df['Distribuicao']

# Limpando dataframe de coisas desnecessárias
eleicoes_df.drop(['QP', 'Media', 'Distribuicao', 'Número'], inplace=True, axis=1, errors='ignore')

# Recupera os candidatos
candidatos_df = pd.read_csv("supp/eleicao.csv", sep=";",error_bad_lines=False)

# Modifica seus partidos e coligações
candidatos_df['Partido/Coligação'] = candidatos_df['Partido/Coligação'].apply(
        lambda x : x.split('-')[1] if len(x.split('-')) > 1 else x.split()[0]
    )

# Organiza seus votos em ordem descendente
candidatos_df = candidatos_df.sort_values(['Partido/Coligação', 'Votos'], ascending=[False, False])

#
resultado = pd.DataFrame([])
for partido in eleicoes_df.itertuples():
    resultado = resultado.append(
        candidatos_df.loc[
            candidatos_df['Partido/Coligação'] == partido.Index
        ][:getattr(partido, 'Total')]
    )

with open("eleicao.tsv", "w") as file_out:
    resultado.sort_values("Votos", ascending = False).to_csv('eleicao.tsv', sep=";", header = True, index_label=None, index=False)

### prova1/

O sistema eleitoral brasileiro trata as eleições para cargos Executivos de forma diferente das eleições para cargos do Legislativo. Especificamente, o modelo de eleição do Executivo é majoritário, isto é, o candidato mais votado dentre os concorrentes é considerado eleito. Por sua vez, a eleição para cargos do Legislativo é chamada proporcional, uma vez que distribui as vagas existentes de forma proporcional ao total de votos válidos. Seu funcionamento consiste:

- Primeiramente, é facultado aos partidos formar coligações, isto é, alianças. O leitor, por sua vez, pode votar nominalmente em um canditado filiado a um partido, ou diretamente em um partido (voto de legenda).

- O segundo passo deste sistema é computar todos os votos válidos efetuados na eleição, identificando o taltal de votos recebidos por cada coligação. A razão entre o total de votos válidos e a quantidade de vagas disponíveis é denominada "quociente eleitoral". Cada coligação ` i ` tem direitoa ` qpi ` vagas, onde ` qpi ` é o resultado da divisão inteira entre o número de votos recebidos pela coligação ` i ` e o quociente eleitoral. Na legislação eleitoral brasileira, ` qpi ` é conhecido como "quociente partidário da coligação ` i `".

- Uma vez que a divisão inteira é adotada no cálculo dos quociente partidários, é comum que haja vagas residuais ao final da distribuição inicial de vagas. Estas vagas residuais são distribuídas de forma iterativa, avaliando cada etapa a razão entre a quantidade de vagas residuais que seriam recebidas pela coligação se a mesma fosse contemplada com a vaga em análise.

- Uma vez determinadas quantas vagas ` ni ` cada coligação ` i ` terá direito, os ` ni ` candidatos mais votados de cada coligação ` i ` são considerados eleitos.

Essa aplicação efetua a análise acima, considerando como entrada um arquivo CSV contendo número do candidato, seu nome, partido e coligação, assim como seu total de votos.

A saída da aplicação lista os candidatos eleitos informando seu número, nome, partido e coligação, assim como seu total de votos.

Infelizmente o arquivo CSV de entrada não contém os votos de legenda, então essa simulação não abrange por completo o resultado das eleições do Rio Grande do Norte de 2016.


### trabalho1

Trabalho sobre nonlocal variables. Nessa pasta consta um jupyter notebook com exemplos e explicações sobre o assunto.

### AvaliaçãoLP2

Avaliação prática com foco em issues. Foram nos dados códigos com erros e cabia aos alunos resolverem.

- O problema _pascal_ consiste em tornar os valores do programas válidos para números grandes, antes a recursão estourava a memória dado certo número
- O problema _tweets_ consiste aplica filtros iniciais para descobrir ` fake news ` em  tweets (usando regex)
- O problema _tree_ consiste em imprimir uma matriz curricular de uma escola de forma hierarquica. Aqui foram utilizados as libs ` anytree ` e ` pydotplus `
- O problema _sorting_ consiste em ordenar uma lista de nomes levando em consideração a acentuação

# Avaliação prática

Esta avaliação compõe parcialmente a nota da 2a unidade da disciplina de Linguagem de programação II.

Em empresas de programação reais, é comum receber listas de issues a resolver durante uma determinada semana.

Esta avaliação simula essa situação. Abaixo estão listados 4 issues que você deve tentar resolver até terça-feira, 22/10/2018.

**Seu código deverá estar em um fork, que deve ser informado por email ao final do prazo estipulado.**

## Erro de ordenação (2,0pt)

O diretório ```sorting``` contém vários arquivos de um módulo de ordenação de textos:
* ```randomize.py```: aleatoriza a ordem do conteúdo de ```rotulos.txt```, produzindo o arquivo ```rotulos.in```
* ```sort.py```: ordena o conteúdo de ```rotulos.in```, produzindo o arquivo ```rotulos.out``` 

No entanto, o arquivo ```rotulos.out``` não está sendo ordenado corretamente. 

O script ```sort.py``` deverá ser corrigido para produzir o arquivo ```rotulos.out``` de forma correta.

*Note que o rótulo Cinema e audiovisual (linha 38) antecede o rótulo Ciência da computação (linha 40).*

## Limpeza de tweets (3,0pt)

O diretório ```tweets``` contém vários arquivos de um módulo de processamento de tweets:
* ```consume.py```: recebe os tweets e armazena seus conteúdos no arquivo ```tweets.in```
* ```process.py```: ordena o conteúdo de ```tweets.in```, produzindo o arquivo ```tweets.out```

**Para resolver este issue você não precisa mexer (nem entender) o script ```consume.py```. Ele foi adicionado para que os interessados possam aprender sobre a API do Twitter ;)**

O script ```process.py``` precisa ser expandido para filtrar apenas as mensagens com potencial de serem *fake news*. 

Para isto, o script deverá capturar apenas os usuários originadores de tweets que contenham URLs que tenham sido retweetados, persistidos no arquivo ```tweets.out``` usando sseparação por tabulação.

*Note que estes tweets iniciam com a sigla RT, seguido do usuário que o originou.*

## Classificação hierárquica (2,0pt se em arquivo; 3,0pt se gráfica; 4,0pt se interativa)

O diretório ```tree``` contém vários arquivos de um módulo de classificação hierárquica:
* ```print.py```: imprime o conteúdo de ```dataset.csv```, produzindo o arquivo ```tree.out```

O conteúdo do arquivo ```dataset.csv``` é uma listagem de rótulos da classificação brasileira de cursos superiores. 

Nesta classificação, há 4 níveis hierárquicos: área geral, específica, detalhada e rótulo. 

Um elemento presente em determinado nível é composto por um código e um nome:
1. Área geral: código com 2 dígitos
2. Área específica: código com 3 dígitos
3. Área detalhada: código com 4 dígitos
4. Rótulo: código com 7 caracteres alfanuméricos

*O código de cada nível inclui o código do seu pai. Ex: o código do rótulo* **0614C01** *Ciência da computação inclui o código da área detalhada* **0614** *Ciência da computação, que por sua vez inclui o código da área específica* **061** *Tecnologias da Informação e Comunicação (TIC), que por sua vez inclui o código da área geral* **06** *Tecnologias da Informação e Comunicação (TIC)*.

No momento, o processamento da classificação está produzindo uma saída linear, o que atrapalha consideravelmente a interpretação hierárquica da classificação.

O script ```print.py``` deverá ser melhorado para permitir a visualização hierárquica da classificação (em arquivo, com interface gráfica ou interativa, a seu critério).

## Triângulo de Pascal

O diretório ```pascal``` contém parte dos arquivos de um módulo de funcionalidades matemáticas:
* ```recursive.py```: imprime o triângulo de Pascal até o valor de ```C(n,k)```, isto é, o coeficiente binomial de ```n``` e ```k```. Produz o arquivo ```triangle.out```.

A implementação do script ```recursive.py``` é simples e concisa. No entanto, sua escalabilidade é sofrível já para valores pequenos de ```n``` e ```k```.

Este script deverá ser melhorado em sua eficiência para que possa ser executado para valores significativamente grandes de ```n``` e ```k```.

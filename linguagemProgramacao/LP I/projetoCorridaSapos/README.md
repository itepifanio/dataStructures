# Como rodar

Observações: Esse programa utiliza o pacote boost em sua utilização, certifique-se
de te-lo instalado em sua máquina. Caso o caminho do pacote seja diferente de ` -L/usr/include/boost ` então modifique a importação feita no makefile.

Para compilar basta rodar: ` make `

Para executar basta rodar: ` bin/exec `

Para gerar a documentação basta digitar na raiz do projeto: ` doxygen `

## Corrida de Sapos

Implemente em C++ um programa que simule a uma corrida de sapos. Implemente uma classe chamada Sapo contendo:

* Atributos: nome, identificador, distância percorrida, quantidade de pulos dados,
quantidade de provas disputadas, vitórias, empates, quantidade total de pulos
dados, quantidade.
	
* Atributo estático público: distância total da corrida

* Métodos públicos:
	* Construtor(es).
	* getters e setters, quando necessários.
	* pular:
		* incrementa distância percorrida de forma randômica entre 1 e o máximo que o sapo pode saltar
		* Incrementa o número de pulos dados em uma unidade
* Sinta-se a vontade para adicionar algum outro método ou atributos

### Especificações do projeto

O código desenvolvido deve seguir as especificações abaixo:

* O programa deverá ler um arquivo que conterá as informações dos sapos disponíveis para a corrida.

* O programa deverá ler um arquivo que conterá as informações sobre as pistas disponíveis para a corrida.

* Ao iniciar o programa, o usuário poderá:
	* Ver estatísticas dos sapos.
	* Ver estatísticas das corridas.
	* Iniciar uma corrida.
	* Criar sapos.
	* Criar corrida.

* Para iniciar uma corrida:
	* O usuário deverá escolher uma pista de corrida que os sapos irão disputar.
	* É mostrado ao usuário a lista dos sapos que iram participar da corrida com seus nomes e números.
	* O usuário dará o start (pei) da corrida.

* Durante a corrida:
	* Cada sapo irá pular individualmente, mostrando ao usuário seu nome, numeração e quanto ele pulou, em cada pulo.
	* A medida que um sapo chegar na linha de chegada, ele não deverá mais pular nem emitir mais mensagens na tela.
	* Quando o ultimo sapo terminar a corrida, o programa mostrará o Rank da corrida.

* Lembre que as operações de criação de sapos e corridas devem salvar os
mesmo nos arquivos, bem como as estatísticas dos sapos após as corridas
realizadas.

### Observações

O código deverá ser devidamente comentado e anotado para dar suporte à geração automática de documentação no formato de páginas Web (HTML) utilizando a ferramenta Doxygen. Para maiores informações, você poderá acessar a página do Doxygen na Internet (http://www.doxygen.org/).

O código do projeto deve seguir a configuração de pastas e arquivos:

* /bin – código executável
* /src – código fonte
* /docs – documentação
* makefile
* README – arquivo contendo informações sobre: configuração, compilação e execução. Também deve conter uma sessão com as informações sobre quais
arquivos e as linhas que contêm os Itens Avaliados da tabela 1.

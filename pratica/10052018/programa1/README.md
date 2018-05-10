# Programa 1

Implemente um programa em C++ que atenda aos seguintes critérios:
a) Contenha uma classe que representa um funcionário, registrando seu nome
(pesquise o uso da classe string 1 ), salário e data de admissão;
Os funcionários são divididos em:

	* Operários: que possuem o nome da fabrica;
	* Gerentes: senha, numeroDeFuncionariosGerenciados;
	* Secretária: ramal

b) Conten ha também uma classe que representa uma empresa, registrando seu
nome, CNPJ e lista de funcionários;

c) O programa deverá permitir criar uma empresa;

d) O programa deverá permitir que se adicione funcionários (um por vez) a uma
empresa e não deve permitir adicionar um funcionário que já tenha sido
anteriormente adicionado, sendo neste caso exibida uma mensagem de erro. Os
funcionários de uma empresa poderão ser mantidos em um array (você já
conhece), vector 2 ou list 3 (pesquisar sobre a STL do C++), ou ainda alguma
estrutura de dados que você já implementou em EDB1 e que considere
conveniente.

Dica: utilize a sobrecarga dos operadores de igualdade (==) e de extração de
stream (>>).

e) O programa deverá permitir listar os dados de todos os funcionários de uma
empresa, sobrecarregando-se o operador de inserção em stream (<<);

f) O programa deverá permitir que seja dado um aumento de X % a todos os
funcionários de uma determinada empresa; sendo 5% operário, 8% secretária,
10% gerente.

g) O programa deverá permitir listar os dados de todos os funcionários de uma
empresa em período de experiência, ou seja, contratados há menos de 90 dias
considerando a data corrente;

h) O programa deverá permitir listar a média de funcionários por empresa. O
cálculo deve ser realizado

# Prova da 2º Unidade

Olá coleguinha, hoje você irá desenvolver um projeto que irá cadastrar um acervo de mídias. Onde o usuário
poderá gerenciar seus livros, Dvds e Cds.

* (1.0 Pts) Entidades, obrigatório o uso de herança.
	* Livro: Titulo, Autor, Ediitora, ISBN, ano do lançamento.
	* Cd: Nome, Compositor, ano do lançamento, quantidade de faixas, gravadora.
	* Dvd: Título, diretor, duração, ano do lançamento, classificação

* Tal biblioteca deve oferecer as seguintes funcionalidades:
	* (0.5 Pts) Inserir mídia, onde o usuário deve informar qual mídia deseja inserir e em seguida, informar seus respectivos dados. Obrigatório uso de uma única estrutura de dados onde todas as mídias devam ser inseridas nela.
	* (1.0 Pts) Não é possível adicionar mídia repetida, sendo nesse caso, mostrado uma mensagem de
erro.
	* (1.5 Pts) Remover Item, que permitirá o usuário retirar um item de seu acerto, para isso, o usuário
deve informar uma das informações do item, caso ele exista no acervo, ele deverá ser removido
	* (1.5) Editar um item, dando a possibilidade do usuário escolher um item e modificar suas
informações.
	* (1.5 Pts) Ver acervo, deverá ser listado todas as mídias presentes, obrigatório uso de Down e Upcast.
	* (1.0 Pts) Ver estatísticas, que irá mostrar quantos livros, Cds e Dvds existem no acervo.
	* (0.5 Pts) Por padrão, a biblioteca já vem com 2 itens de cada.

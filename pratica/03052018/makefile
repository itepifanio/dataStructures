PROG = bin/deposito
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o deposito.o produto.o produtoDuravel.o produtoNaoDuravel.o pizza.o refrigerante.o celular.o carro.o livro.o chocolate.o
INCLUDEPRODUTOS = include/deposito.hpp include/produtoDuravel.hpp include/produtoNaoDuravel.hpp include/produto.hpp include/produtos/pizza.hpp include/produtos/refrigerante.hpp include/produtos/chocolate.hpp include/produtos/celular.hpp include/produtos/carro.hpp include/produtos/livro.hpp
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC)  $(OBJS) $(PRODUTOS) -o $(PROG)
	mv *.o build/

main.o : $(INCLUDEPRODUTOS)
	$(CC) $(CPPFLAGS) -c src/main.cpp



produtoNaoDuravel.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produtoNaoDuravel.cpp

produtoDuravel.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produtoDuravel.cpp

produto.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produto.cpp

deposito.o : include/deposito.hpp
	$(CC) $(CPPFLAGS) -c src/deposito.cpp

pizza.o : include/produtoNaoDuravel.hpp include/produtos/pizza.hpp
	$(CC) $(CPPFLAGS) -c src/produtos/pizza.cpp

refrigerante.o : include/produtoNaoDuravel.hpp include/produtos/refrigerante.hpp
	$(CC) $(CPPFLAGS) -c src/produtos/refrigerante.cpp

celular.o : include/produtoDuravel.hpp include/produtos/celular.hpp
	$(CC) $(CPPFLAGS) -c src/produtos/celular.cpp

carro.o : include/produtoDuravel.hpp include/produtos/carro.hpp
	$(CC) $(CPPFLAGS) -c src/produtos/carro.cpp

livro.o : include/produtoDuravel.hpp include/produtos/livro.hpp
	$(CC) $(CPPFLAGS) -c src/produtos/livro.cpp

chocolate.o : include/produtoNaoDuravel.hpp include/produtos/chocolate.hpp
	$(CC) $(CPPFLAGS) -c src/produtos/chocolate.cpp

clean:
	rm -f $(PROG) build/*.o

PROG = bin/deposito
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o deposito.o produto.o produtoDuravel.o produtoNaoDuravel.o
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC)  $(OBJS)  -o $(PROG)
	mv *.o build/

main.o : include/deposito.hpp include/produtoDuravel.hpp include/produtoNaoDuravel.hpp include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp

produtoNaoDuravel.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produtoNaoDuravel.cpp

produtoDuravel.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produtoDuravel.cpp

produto.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produto.cpp

deposito.o : include/deposito.hpp
	$(CC) $(CPPFLAGS) -c src/deposito.cpp

clean:
	rm -f $(PROG) build/*.o

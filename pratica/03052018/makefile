PROG = bin/ordList
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o produto.o produtoDuravel.o produtoNaoDuravel.o
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC)  $(OBJS)  -o $(PROG)
	mv *.o build/

main.o : include/produtoDuravel.hpp include/produtoNaoDuravel.hpp include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp

produtoNaoDuravel.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produtoNaoDuravel.cpp

produtoDuravel.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produtoDuravel.cpp

produto.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produto.cpp

clean:
	rm -f $(PROG) build/*.o

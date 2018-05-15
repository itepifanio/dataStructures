PROG = bin/midias
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o livro.o cd.o dvd.o estoque.o midia.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o build/

main.o : include/livro.hpp include/cd.hpp include/dvd.hpp include/midia.hpp include/estoque.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp

livro.o : include/midia.hpp include/livro.hpp
	$(CC) $(CPPFLAGS) -c src/livro.cpp

cd.o : include/midia.hpp include/cd.hpp
	$(CC) $(CPPFLAGS) -c src/cd.cpp

dvd.o : include/midia.hpp include/dvd.hpp
	$(CC) $(CPPFLAGS) -c src/dvd.cpp

estoque.o : include/midia.hpp include/estoque.hpp
	$(CC) $(CPPFLAGS) -c src/estoque.cpp

midia.o : include/midia.hpp
	$(CC) $(CPPFLAGS) -c src/midia.cpp

clean:
	rm -f build/*.o


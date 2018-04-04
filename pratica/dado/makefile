#Makefile for "programa" C++ application
#Created by Hand 23/02/2018

PROG = bin/programa
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o dado.o
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC)  $(OBJS)  -o $(PROG)
	mv *.o build/

main.o : include/dado.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp

dado.o : include/dado.hpp
	$(CC) $(CPPFLAGS) -c src/dado.cpp

clean:
	rm -f $(PROG) build/*.o

	
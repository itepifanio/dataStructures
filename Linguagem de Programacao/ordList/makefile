#Makefile for "ordList" C++ application
#Created by itepifanio 23/02/2018

PROG = bin/ordList
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC)  $(OBJS)  -o $(PROG)
	mv *.o build/

main.o : include/ordList.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp

clean:
	rm -f $(PROG) build/*.o
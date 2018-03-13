PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o dado.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp
dado.o: dado.h
	$(CC) $(CPPFLAGS) -c dado.cpp


clean: 
	rm -f *.o exec



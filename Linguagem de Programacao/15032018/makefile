PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o sapos.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp
dado.o: sapos.h
	$(CC) $(CPPFLAGS) -c sapos.cpp


clean: 
	rm -f *.o exec



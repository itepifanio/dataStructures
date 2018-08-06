PROG = bin/exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o list.o node.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o build/

main.o : include/list.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp
list.o: include/list.hpp include/node.hpp
	$(CC) $(CPPFLAGS) -c src/list.cpp

clean:
	rm -f build/*.o

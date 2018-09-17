PROG = bin/exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o build/

main.o : include/leftChildRightSibling.hpp include/node.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp

clean:
	rm -f build/*.o

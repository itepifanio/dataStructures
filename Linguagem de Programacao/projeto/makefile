PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o sapos.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o build/

main.o: 
	$(CC) $(CPPFLAGS) -c src/main.cpp
sapos.o: include/sapos.hpp
	$(CC) $(CPPFLAGS) -c src/sapos.cpp


clean: 
	rm -f $(PROG) build/*.o



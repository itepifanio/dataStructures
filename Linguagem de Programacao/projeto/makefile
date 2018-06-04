PROG = bin/exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o sapos.o corrida.o pista.o

$(PROG) : $(OBJS)
	$(CC) -L/usr/include/boost $(OBJS) -o $(PROG)
	mv *.o build/

main.o: include/sapos.hpp include/pista.hpp include/corrida.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp
corrida.o: include/corrida.hpp include/sapos.hpp include/pista.hpp
	$(CC) $(CPPFLAGS) -c src/corrida.cpp
sapos.o: include/sapos.hpp
	$(CC) $(CPPFLAGS) -c src/sapos.cpp
pista.o: include/pista.hpp
	$(CC) $(CPPFLAGS) -c src/pista.cpp

clean:
	rm -f $(PROG) build/*.o

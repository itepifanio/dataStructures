PROG = bin/exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o sapos.o corrida.o pista.o readCsv.o

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
readCsv.o: include/readCsv.hpp
	$(CC) $(CPPFLAGS) -c src/readCsv.cpp

clean:
	rm -f $(PROG) build/*.o

PROG = exec
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o sapos.o corrida.o pista.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o build/

main.o: include/sapos.hpp include/pista.hpp include/corrida.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp
corrida.o: include/corrida.hpp
	$(CC) $(CPPFLAGS) -c src/corrida.cpp
sapos.o: include/sapos.hpp
	$(CC) $(CPPFLAGS) -c src/sapos.cpp
pista.o: include/pista.hpp
	$(CC) $(CPPFLAGS) -c src/pista.cpp

clean: 
	rm -f $(PROG) build/*.o



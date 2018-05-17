PROG = bin/progama1
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o funcionario.o empresa.o secretaria.o gerente.o operario.o 

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o build/

main.o : include/funcionario.hpp include/empresa.hpp include/secretaria.hpp include/gerente.hpp include/operario.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp

empresa.o : include/empresa.hpp
	$(CC) $(CPPFLAGS) -c src/empresa.cpp

gerente.o : include/funcionario.hpp include/gerente.hpp
	$(CC) $(CPPFLAGS) -c src/gerente.cpp

operario.o : include/funcionario.hpp include/operario.hpp
	$(CC) $(CPPFLAGS) -c src/operario.cpp

secretaria.o : include/funcionario.hpp include/secretaria.hpp
	$(CC) $(CPPFLAGS) -c src/secretaria.cpp

funcionario.o : include/funcionario.hpp
	$(CC) $(CPPFLAGS) -c src/funcionario.cpp

clean:
	rm -f build/*.o

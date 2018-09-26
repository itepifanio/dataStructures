PROG = bin/programa

$(PROG): main.o tempo.o
	g++ main.o tempo.o -o $(PROG)
	mv *.o build/

main.o : include/tempo.hpp
	g++ -c src/main.cpp
tempo.o : include/tempo.hpp
	g++ -c src/tempo.cpp
clean:
	rm -f $(PROG) build/*.o

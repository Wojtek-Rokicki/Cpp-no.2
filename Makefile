# Mój plik makefile - wpisz 'make all' aby skompilować cały program
# (właściwie wystarczy wpisać 'make' - all jest domyślny jako pierwszy cel)
CPP = g++  

all: main.o library.o
	$(CPP) library.o main.o -std=c++11 -o aplikacja

library.o: library.cpp  library.h
	$(CPP) library.cpp -std=c++11 -c -o library.o

main.o: main.cpp library.h
	$(CPP) main.cpp -std=c++11 -c -o main.o

clean:
	rm -f *.o aplikacja

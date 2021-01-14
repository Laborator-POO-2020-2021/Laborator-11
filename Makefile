CC = gcc
CFLAGS = -Wall -g

build:localitate.o oras.o municipiu.o capitala.o tara.o
	g++ -g -Wall main.cpp localitate.cpp oras.cpp municipiu.cpp capitala.cpp tara.cpp -o ceva
localitate.o: localitate.cpp
oras.o: oras.cpp
municipiu.o:municipiu.cpp
capitala.o:capitala.cpp
tara.o:tara.cpp

.PHONY: clean

clean:
	rm ceva
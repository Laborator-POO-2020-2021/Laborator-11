CC=g++
CFLAGS=-g
SRC=main.cpp localitate.cpp oras.cpp municipiu.cpp capitala.cpp tara.cpp
EXEC=a.out

build: 
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC)
	./$(EXEC)
clean:
	rm -f $(EXEC)
run:
	./$(EXEC)
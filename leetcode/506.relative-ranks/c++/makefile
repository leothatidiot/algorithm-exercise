CC = g++

all: main

main: main.o Solution.o
	$(CC) $^ -o $@ 

main.o: main.cpp Solution.cpp
	$(CC) -c $<

Solution.o: Solution.cpp
	$(CC) -c $<

clean:
	rm -rf *.o main
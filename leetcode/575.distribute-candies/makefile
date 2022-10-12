CC = g++

all: 575

575: main.o Solution.o
	$(CC) $^ -o $@ 

main.o: main.cpp Solution.cpp
	$(CC) -c $<

Solution.o: Solution.cpp
	$(CC) -c $<

clean:
	rm -rf *.o 575
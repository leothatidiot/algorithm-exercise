CC = g++

all: 1646

1646: main.o Solution.o
	$(CC) $^ -o $@ 

main.o: main.cpp Solution.cpp
	$(CC) -c $<

Solution.o: Solution.cpp
	$(CC) -c $<

clean:
	rm -rf *.o 1646
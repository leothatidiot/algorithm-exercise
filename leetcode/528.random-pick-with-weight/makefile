CC = g++

all: 528

528: main.o Solution.o
	$(CC) $^ -o $@

main.o: main.cpp Solution.cpp
	$(CC) -c main.cpp

Solution.o: Solution.cpp
	$(CC) -c Solution.cpp

clean:
	rm -rf 528 *.o
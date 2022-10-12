CC = g++

all: 1374

1374: main.o Solution.o
	$(CC) $^ -o $@

main.o: main.cpp Solution.cpp
	$(CC) $< -c

Solution.o: Solution.cpp
	$(CC) $< -c

clean:
	rm *.o 1374
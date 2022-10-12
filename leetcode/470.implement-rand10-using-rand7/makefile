CC = g++

all: 470

470: main.o
	$(CC) $^ -o $@

main.o: main.cpp Solution.cpp
	$(CC) -c $<

Solution.o: Solution.cpp
	$(CC) -c $<

clean:
	rm -rf 470 *.o 
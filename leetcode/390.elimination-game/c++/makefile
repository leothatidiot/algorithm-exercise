# 适用于 Windows

CC = g++

all: main

main: main.o Solution.o
	$(CC) $^ -o main.exe

main.o: main.cpp Solution.cpp
	$(CC) -c $<

Solution.o: Solution.cpp
	$(CC) -c $<

clean:
	del *.o main.exe
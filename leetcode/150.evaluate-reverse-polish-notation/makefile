CC = g++

all: rpn

rpn: main.o Solution.o
	$(CC) $^ -o $@

main.o: main.cpp Solution.cpp
	$(CC) -c $< 

Solution.o: Solution.cpp
	$(CC) -c $< 

# clean:
# 	rm rpn.exe *.o
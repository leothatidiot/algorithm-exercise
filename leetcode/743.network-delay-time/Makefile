CC = g++

all: ndt

ndt: main.o network-delay-time.o
	# $(CC) main.o network-delay-time.o -o ndt
	$(CC) $^ -o $@

main.o: main.cpp
	$(CC) -c main.cpp

network-delay-time.o: network-delay-time.cpp
	$(CC) -c network-delay-time.cpp

clean:
	rm -rf *.o ndt
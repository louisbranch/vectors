FLAGS=-Wall -g
CC=g++
all:
	$(CC) ${FLAGS} vectors.cpp -o vectors
clean:
	rm -f vectors

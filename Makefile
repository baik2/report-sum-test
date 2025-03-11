# Makefile
CC = gcc
CFLAGS = -Wall -std=c99

all: sum

sum: sum.o
	$(CC) -o sum sum.o

sum.o: sum.h sum.c
	$(CC) -c -o sum.o sum.c

clean:
	rm -f sum
	rm -f *.o

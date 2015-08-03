CFLAGS=-g
CC=gcc
all:
	$(CC) $(CFLAGS) matrix.c main.c -lncurses -o matrix
clean:
	rm -f matrix

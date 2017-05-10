SRCS=$(wildcard *.c)

CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -Wwrite-strings -Wstack-usage=1024 -Wfloat-equal -Waggregate-return -Winline

all: $(SRCS:.c=)

.c:
	$(CC) $(CFLAGS) $< -o ../bin/$@

clean:
	rm -f ../bin/*

SRCS=$(wildcard *.c)

CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -Wwrite-strings -Wstack-usage=1024 -Wfloat-equal -Waggregate-return -Winline

all:
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f bin/*

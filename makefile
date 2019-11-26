all: parse.o
	gcc -o a.out parse.o

parse.o: parse.c
	gcc -c parse.c

run:
	./a.out
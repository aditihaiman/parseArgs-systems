all: parse.o
	gcc -o a.out parse.o

parse.o:
	gcc -c parse.c

run:
	./a.out
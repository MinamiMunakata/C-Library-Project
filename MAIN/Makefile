# Makefile

# author: Minami Munakata

all: demo

demo: main.c libvc.a
	gcc -Wall main.c libvc.a -o demo

libvc.a: *.o
	ar -cvq libvc.a *.o

*.o: *.c
	gcc -c ../part1/*.c ../part2/*.c

clean:
	rm *.o demo libvc.a
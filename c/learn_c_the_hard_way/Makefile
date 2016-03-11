CFLAGS=-Wall -g -std=c99

all: ex22

ex22:
	cc -Wall -g -DNDEBUG   -c -o ex22.o ex22.c
	cc -Wall -g -DNDEBUG    ex22_main.c ex22.o   -o ex22_main

clean:
	find . -type f -executable -exec rm {} \;
	find . -type f -name '*.o' -exec rm {} \;

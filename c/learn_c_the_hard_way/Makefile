CFLAGS=-Wall -g -std=c99

all: ex22

ex22:
	cc -Wall -g -DNDEBUG   -c -o ex22.o ex22.c
	cc -Wall -g -DNDEBUG    ex22_main.c ex22.o   -o ex22_main

ex29:
	cc -fPIC -c libex29.c -o libex29.o
	cc -shared -o libex29.so libex29.o
	cc -Wall -g -DNDEBUG ex29.c -ldl -o ex29

clean:
	find . -type f -executable -exec rm {} \;
	find . -type f -name '*.o' -exec rm {} \;

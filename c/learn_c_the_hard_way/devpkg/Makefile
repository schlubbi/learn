PREFIX?=/usr/local/apr
CFLAGS= -g -O2 -pthread -Wall -I/usr/local/apr/include/apr-1  -I${PREFIX}/apr/include/apr-util-1 -D_LARGEFILE64_SOURCE
LDADD=-L/usr/local/apr/lib -Wl,-R/usr/local/apr/lib
LDFLAGS=-L/usr/local/apr/lib -lapr-1 -lrt -lcrypt  -lpthread -ldl

all: devpkg

devpkg: bstrlib.o db.o shell.o commands.o

install: all
	install -d $(DESTDIR)/$(PREFIX)/bin/
	install devpkg $(DESTDIR)/$(PREFIX)/bin/

clean:
	rm -f *.o
	rm -f devpkg
	rm -rf *.dSYM

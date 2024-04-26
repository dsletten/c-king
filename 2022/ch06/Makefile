CFLAGS=-Wall -g

euclid.o: euclid.c euclid.h
	${CC} ${CFLAGS} -c euclid.c -o $@

gcd: gcd.c euclid.o
	${CC} ${CFLAGS} euclid.o gcd.c -o $@

fraction: fraction.c euclid.o
	${CC} ${CFLAGS} euclid.o fraction.c -o $@

all: clean squares largest gcd fraction broker reverse_digits even_squares calendar

clean:
	rm -f squares
	rm -f largest
	rm -f gcd
	rm -f fraction
	rm -f broker
	rm -f reverse_digits
	rm -f even_squares
	rm -f calendar

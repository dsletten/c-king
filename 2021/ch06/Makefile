CFLAGS=-Wall -g

gcd: euclid.o gcd.c
	${CC} ${CFLAGS} euclid.o gcd.c -lm -o $@

reduce: euclid.o reduce.c
	${CC} ${CFLAGS} euclid.o reduce.c -lm -o $@

euclid.o: euclid.c euclid.h
	${CC} ${CFLAGS} -c euclid.c -o $@

all: clean largest gcd reduce broker reverse_digits even_squares calendar

clean:
	rm -f largest
	rm -f gcd
	rm -f reduce
	rm -f broker
	rm -f reverse_digits
	rm -f even_squares
	rm -f calendar

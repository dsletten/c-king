CFLAGS=-Wall -g

read_num.o: read_num.c read_num.h
	${CC} ${CFLAGS} -c read_num.c

euclid.o: euclid.c euclid.h
	${CC} ${CFLAGS} -c euclid.c

maximum: maximum.o read_num.o
	${CC} ${CFLAGS} -o $@ maximum.o read_num.o

maximum.o: maximum.c
	${CC} ${CFLAGS} -c maximum.c

gcd: gcd.o read_num.o euclid.o
	${CC} ${CFLAGS} -o $@ gcd.o read_num.o euclid.o

gcd.o: gcd.c
	${CC} ${CFLAGS} -c gcd.c

normalize: normalize.o read_num.o euclid.o
	${CC} ${CFLAGS} -o $@ normalize.o read_num.o euclid.o

normalize.o: normalize.c
	${CC} ${CFLAGS} -c normalize.c

reverse_digits: reverse_digits.o read_num.o
	${CC} ${CFLAGS} -o $@ reverse_digits.o read_num.o

reverse_digits.o: reverse_digits.c
	${CC} ${CFLAGS} -c reverse_digits.c

broker: broker.o read_num.o
	${CC} ${CFLAGS} -o $@ broker.o read_num.o

broker.o: broker.c
	${CC} ${CFLAGS} -c broker.c

squares: squares.o read_num.o
	${CC} ${CFLAGS} -o $@ squares.o read_num.o

squares.o: squares.c
	${CC} ${CFLAGS} -c squares.c

calendar: calendar.o read_num.o
	${CC} ${CFLAGS} -o $@ calendar.o read_num.o

calendar.o: calendar.c
	${CC} ${CFLAGS} -c calendar.c

all: clean maximum gcd

clean:
	rm -f maximum
	rm -f gcd
	rm -f normalize
	rm -f reverse_digits
	rm -f broker
	rm -f squares
	rm -f calendar

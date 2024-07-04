CFLAGS=-Wall -g

readn.o: readn.c readn.h
	${CC} ${CFLAGS} -c readn.c

reverse2: reverse2.o
	${CC} ${CFLAGS} -o $@ reverse2.o readn.o -lm

reverse2.o: reverse2.c readn.o
	${CC} ${CFLAGS} -c reverse2.c

reverse3: reverse3.o
	${CC} ${CFLAGS} -o $@ reverse3.o readn.o -lm

reverse3.o: reverse3.c readn.o
	${CC} ${CFLAGS} -c reverse3.c

all: clean reverse2 reverse3 reverse3a

clean:
	rm -f reverse2
	rm -f reverse3
	rm -f reverse3a

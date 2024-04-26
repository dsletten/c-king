CFLAGS=-Wall -g

upc_test: upc_cmocka.o upc.o
	${CC} ${CFLAGS} upc.o upc_cmocka.o -lm -lcmocka -o $@

upc_cmocka.o: upc_cmocka.c upc.o upc.h
	${CC} ${CFLAGS} -c upc_cmocka.c -o $@

upc.o: upc.c upc.h
	${CC} ${CFLAGS} -c upc.c -o $@

upc_main: upc_main.c upc.o
	${CC} ${CFLAGS} upc_main.c upc.o -o $@

reverse2: reverse2.c
	${CC} ${CFLAGS} reverse2.c -o $@

reverse3: reverse3.c
	${CC} ${CFLAGS} reverse3.c -o $@

reverse3a: reverse3a.c
	${CC} ${CFLAGS} reverse3a.c -o $@

all: clean upc_test upc_main reverse2 reverse3 reverse3a

clean:
	rm -f upc_test
	rm -f upc_main
	rm -f reverse2
	rm -f reverse3
	rm -f reverse3a

CFLAGS=-Wall -g

inventory2: inventory2.o readline.o
	${CC} ${CFLAGS} -o $@ inventory2.o readline.o

inventory2.o: inventory2.c readline.h
	${CC} ${CFLAGS} -c inventory2.c

inventory3: inventory3.o readline.o
	${CC} ${CFLAGS} -o $@ inventory3.o readline.o

inventory3.o: inventory3.c readline.h
	${CC} ${CFLAGS} -c inventory3.c

readline.o: readline.c readline.h
	${CC} ${CFLAGS} -c readline.c

test_linked_list: test_linked_list.o linked_list.o
	${CC} ${CFLAGS} -o $@ test_linked_list.o linked_list.o

test_linked_list.o: test_linked_list.c linked_list.h
	${CC} ${CFLAGS} -c test_linked_list.c

linked_list.o: linked_list.c linked_list.h
	${CC} ${CFLAGS} -c linked_list.c

tabulate:
	${CC} ${CFLAGS} -o $@ tabulate.c -lm

all: clean remind2 inventory2 inventory3 test_linked_list tabulate

clean:
	rm -f inventory2
	rm -f inventory3
	rm -f remind2
	rm -f test_linked_list
	rm -f tabulate


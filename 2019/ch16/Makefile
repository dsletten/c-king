CFLAGS=-Wall -g

inventory: inventory.o readline.o
	${CC} ${CFLAGS} -o $@ inventory.o readline.o

inventory.o: inventory.c readline.h
	${CC} ${CFLAGS} -c inventory.c

readline.o: readline.c readline.h
	${CC} ${CFLAGS} -c readline.c

rectangle: rectangle.o shape.o
	${CC} ${CFLAGS} -o $@ rectangle.o shape.o

rectangle.o: rectangle.c shape.h
	${CC} ${CFLAGS} -c rectangle.c

shape.o: shape.c shape.h
	${CC} ${CFLAGS} -c shape.c

ex11: ex11.o shape.o
	${CC} ${CFLAGS} -o $@ ex11.o shape.o

ex11.o: ex11.c shape.h
	${CC} ${CFLAGS} -c ex11.c

all: clean inventory.o readline.o inventory rectangle.o shape.o rectangle ex11.o ex11

clean:
	rm -f inventory
	rm -f rectangle
	rm -f ex11

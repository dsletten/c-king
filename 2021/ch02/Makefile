CFLAGS=-Wall -g

dweight: dweight.c
	${CC} ${CFLAGS} -o $@ dweight.c -lm

all: clean dweight

clean:
	rm -f dweight

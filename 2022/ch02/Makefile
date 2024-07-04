CFLAGS=-Wall -g

# hello: hello.c
# 	${CC} ${CFLAGS} -o $@ hello.c

dweight: dweight.c
	${CC} ${CFLAGS} -o $@ dweight.c

sphere: sphere.c
	${CC} ${CFLAGS} -o $@ sphere.c -lm

all: clean hello dweight sphere

clean:
	rm -f hello
	rm -f dweight
	rm -f sphere

CFLAGS=-Wall -g

all: clean arrays repeats repeats.c99 interest multidimensional deal deal.unicode repeats1 repeats2 repeats3 random_walk segments

clean:
	rm -f arrays
	rm -f repeats
	rm -f repeats.c99
	rm -f interest
	rm -f multidimensional
	rm -f deal
	rm -f deal.unicode
	rm -f repeats1
	rm -f repeats2
	rm -f repeats3
	rm -f segments
	rm -f random_walk

segments:
	${CC} ${CFLAGS} -o $@ segments.c -lm

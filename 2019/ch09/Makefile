CFLAGS=-Wall -g

all: clean primes king-primes quicksort quicksort_recursive day_of_year exercises arrays conversions dud_swap zeros median

clean:
	rm -f primes
	rm -f king-primes
	rm -f quicksort
	rm -f quicksort_recursive
	rm -f day_of_year
	rm -f exercises
	rm -f arrays
	rm -f conversions
	rm -f dud_swap
	rm -f zeros
	rm -f median

primes:
	${CC} ${CFLAGS} -o $@ primes.c -lm

exercises:
	${CC} ${CFLAGS} -o $@ exercises.c -lm

median:
	${CC} ${CFLAGS} -o $@ median.c -lm

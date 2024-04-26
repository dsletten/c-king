CFLAGS=-Wall -g

all: clean interest interest_monthly vla repdigit repdigit1 repdigit2 repdigits_recursive repdigit3 reverse b1ff segments array_stats grades random_walk random_walk.unicode

repdigit: repdigit.o
	${CC} ${CFLAGS} -o $@ repdigit.o utils.o

repdigit.o: repdigit.c utils.o
	${CC} ${CFLAGS} -c repdigit.c

repdigit1: repdigit1.o
	${CC} ${CFLAGS} -o $@ repdigit1.o utils.o

repdigit1.o: repdigit1.c utils.o
	${CC} ${CFLAGS} -c repdigit1.c

repdigit2: repdigit2.o
	${CC} ${CFLAGS} -o $@ repdigit2.o utils.o

repdigit2.o: repdigit2.c utils.o
	${CC} ${CFLAGS} -c repdigit2.c

repdigit3: repdigit3.o
	${CC} ${CFLAGS} -o $@ repdigit3.o utils.o

repdigit3.o: repdigit3.c utils.o
	${CC} ${CFLAGS} -c repdigit3.c

repdigits_recursive: repdigits_recursive.o
	${CC} ${CFLAGS} -o $@ repdigits_recursive.o utils.o

repdigits_recursive.o: repdigits_recursive.c utils.o
	${CC} ${CFLAGS} -c repdigits_recursive.c

reverse: reverse.o
	${CC} ${CFLAGS} -o $@ reverse.o utils.o

reverse.o: reverse.c utils.o
	${CC} ${CFLAGS} -c reverse.c

interest_monthly: interest_monthly.o
	${CC} ${CFLAGS} -o $@ interest_monthly.o utils.o

interest_monthly.o: interest_monthly.c utils.o
	${CC} ${CFLAGS} -c interest_monthly.c

utils.o: utils.c utils.h
	${CC} ${CFLAGS} -c utils.c

segments: segments.o
	${CC} ${CFLAGS} -o $@ segments.o utils.o -lm

segments.o: segments.c utils.o
	${CC} ${CFLAGS} -c segments.c

array_stats: array_stats.o
	${CC} ${CFLAGS} -o $@ array_stats.o utils.o

array_stats.o: array_stats.c utils.o
	${CC} ${CFLAGS} -c array_stats.c

grades: grades.o
	${CC} ${CFLAGS} -o $@ grades.o utils.o

grades.o: grades.c utils.o
	${CC} ${CFLAGS} -c grades.c

clean:
	rm -f vla
	rm -f interest
	rm -f interest_monthly
	rm -f repdigit
	rm -f repdigit1
	rm -f repdigit2
	rm -f repdigits_recursive
	rm -f repdigit3
	rm -f reverse
	rm -f b1ff
	rm -f segments
	rm -f array_stats
	rm -f grades
	rm -f random_walk
	rm -f random_walk.unicode


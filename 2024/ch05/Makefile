CFLAGS=-Wall -g

read_num.o: read_num.c read_num.h
	${CC} ${CFLAGS} -c read_num.c

broker: broker.o
	${CC} ${CFLAGS} -o $@ broker.o read_num.o

broker.o: broker.c read_num.o
	${CC} ${CFLAGS} -c broker.c

broker2: broker2.o
	${CC} ${CFLAGS} -o $@ broker2.o read_num.o

broker2.o: broker2.c read_num.o
	${CC} ${CFLAGS} -c broker2.c

beaufort: beaufort.o
	${CC} ${CFLAGS} -o $@ beaufort.o read_num.o

beaufort.o: beaufort.c read_num.o
	${CC} ${CFLAGS} -c beaufort.c

income_tax: income_tax.o
	${CC} ${CFLAGS} -o $@ income_tax.o read_num.o

income_tax.o: income_tax.c read_num.o
	${CC} ${CFLAGS} -c income_tax.c

grade: grade.o
	${CC} ${CFLAGS} -o $@ grade.o read_num.o

grade.o: grade.c read_num.o
	${CC} ${CFLAGS} -c grade.c

cardinal: cardinal.o
	${CC} ${CFLAGS} -o $@ cardinal.o read_num.o

cardinal.o: cardinal.c read_num.o
	${CC} ${CFLAGS} -c cardinal.c

digits_math: digits_math.c
	${CC} ${CFLAGS} -o $@ digits_math.c -lm

all: clean digits digits_math military

clean:
	rm -f digits
	rm -f digits_math
	rm -f military
	rm -f broker
	rm -f broker2
	rm -f beaufort
	rm -f income_tax
	rm -f grade
	rm -f cardinal




CC = clang
CFLAGS = -Wall -Wpedantic -Werror -Wextra
LFLAGS = -lm

all: mathlib-test

mathlib-test: mathlib-test.o e.o euler.o bbp.o madhava.o newton.o viete.o
	$(CC) -o mathlib-test mathlib-test.o e.o euler.o bbp.o madhava.o newton.o viete.o $(LFLAGS) 

mathlib-test.o: mathlib-test.c mathlib.h
	$(CC) $(CFLAGS) -c mathlib-test.c

e.o: e.c mathlib.h
	$(CC) $(CFLAGS) -c e.c

euler.o: euler.c mathlib.h
	$(CC) $(CFLAGS) -c euler.c

bbp.o: bbp.c mathlib.h
	$(CC) $(CFLAGS) -c bbp.c

madhava.o: madhava.c mathlib.h
	$(CC) $(CFLAGS) -c madhava.c

newton.o: newton.c mathlib.h
	$(CC) $(CFLAGS) -c newton.c

viete.o: viete.c mathlib.h
	$(CC) $(CFLAGS) -c viete.c

clean:
	rm -f mathlib-test *.o

format:
	clang-format -i -style=file *.c *.h


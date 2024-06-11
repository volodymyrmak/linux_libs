CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: main

main: main.o libmath.a
	$(CC) $(CFLAGS) -o $@ $< -L . -l math

main.o: main.c math_lib.h
	$(CC) $(CFLAGS) -c $<

sum.o: sum.c math_lib.h
	$(CC) $(CFLAGS) -c $<

diff.o: diff.c math_lib.h
	$(CC) $(CFLAGS) -c $<

multiplication.o: multiplication.c math_lib.h
	$(CC) $(CFLAGS) -c $<

division.o: division.c math_lib.h
	$(CC) $(CFLAGS) -c $<

factorial.o: factorial.c math_lib.h
	$(CC) $(CFLAGS) -c $<

square_root.o: square_root.c math_lib.h
	$(CC) $(CFLAGS) -c $<

libmath.a: sum.o diff.o multiplication.o division.o factorial.o square_root.o
	ar rc $@ $^

clean:
	rm -f main *o *a

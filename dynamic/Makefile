CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIB_NAME = libformatting.so

all: main

main: main.o $(LIB_NAME)
	$(CC) $(CFLAGS) -o $@ $< -L . -l formatting

main.o: main.c formatting.h
	$(CC) $(CFAGS) -c $<

low.o: low.c formatting.h
	$(CC) $(CFLAGS) -fPIC -c -o $@ $<

upper.o: upper.c formatting.h
	$(CC) $(CFLAGS) -fPIC -c -o $@ $<

$(LIB_NAME): low.o upper.o
	$(CC) -shared -o $@ $^

install: $(LIB_NAME)
	cp $(LIB_NAME) /usr/lib/
	ldconfig

clean:
	rm -f main *o *so

clean-all: clean
	rm -f /usr/lib/$(LIB_NAME)

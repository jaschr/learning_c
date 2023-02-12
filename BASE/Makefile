SRC=$(wildcard src/*.c)
BIN=$(notdir $(basename $(SRC)))
OBJ=$(SRC:.c=.o)
CFLAGS=-g -Wall
CC=gcc

.PHONY: all clean

$(BIN): $(OBJ)
	gcc $(OBJ) $(CFLAGS) -o bin/$(BIN)

%.o: %.c include/%.h
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	-rm bin/$(BIN)
	-rm *.o
	-rm src/*.o

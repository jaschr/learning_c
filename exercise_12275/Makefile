SRC=$(wildcard src/*.c)
EXEC=$(notdir $(basename $(SRC)))
OBJ=$(SRC:.c=.o)
CFLAGS=-g -Wall
CC=gcc

.PHONY: all clean

$(EXEC): $(OBJ)
	gcc $(OBJ) $(CFLAGS) -o bin/$(EXEC)

%.o: %.c include/%.h
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	-rm bin/$(EXEC)
	-rm *.o
	-rm src/*.o

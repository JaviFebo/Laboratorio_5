CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -Iinclude

all: main

main: src/main.c src/lista_enlazada.c
	$(CC) $(CFLAGS) src/main.c src/lista_enlazada.c -o main

clean:
	rm -f main


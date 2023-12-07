VPATH = src
CFLAGS = -g

2048: main.o rand.o move.o map.o utils.o game.o
	$(CC) main.o rand.o move.o map.o utils.o game.o -g -o 2048

run: 2048
	./2048

clean:
	rm *.o 2048

myas: main.o check.o trans.o
	gcc -o myas main.o check.o trans.o

main.o: main.c
	gcc -c main.c

trans.o: trans.c
	gcc -c trans.c

check.o: check.c
	gcc -c check.c

clean: rm -rf main.o check.o trans.o

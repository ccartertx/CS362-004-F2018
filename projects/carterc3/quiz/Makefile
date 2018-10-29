CFLAGS= -Wall -fpic -lm -std=c99

default: testme
	./testme

testme: testme.c
	gcc -o testme testme.c $(CFLAGS)

clean:
	rm -f *.o 
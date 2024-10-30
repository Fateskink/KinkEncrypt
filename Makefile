all: encrypt example

example: example.o
	gcc example.o -o example -O2 -Wall

example.o: example.c
	gcc -c -O2 -Wall example.c

encrypt: encrypt.o
	gcc encrypt.o -o encrypt.so -O2 -Wall -fPIC -shared -ldl -D_GNU_SOURCE

encrypt.o: encrypt.c
	gcc -c -O2 -Wall encrypt.c

clean:
	rm -rf *.o *.so example

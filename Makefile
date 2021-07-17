build:
	gcc -Wall -std=c11 -o /build/enp main.c

install: build
	cp /build/enp /usr/local/bin/
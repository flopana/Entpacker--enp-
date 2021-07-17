build: main.c validate.c view_top_level.c
	gcc -Wall -std=c11 -o build/enp main.c

install: build
	cp build/enp /usr/local/bin/
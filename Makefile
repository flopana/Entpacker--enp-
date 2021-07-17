build: main.c validate.c view_top_level.c build/enp
	gcc -Wall -std=c11 -o build/enp main.c

install: build
	cp build/enp /usr/local/bin/

clean:
	rm build/enp

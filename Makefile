build: main.o validate.o view_files_in_archive.o check_suffix.o
	gcc -Wall -std=c11 -o build/enp main.c

main.o: main.c
	gcc -c main.c

validate.o: validate.c
	gcc -c validate.c

view_files_in_archive.o: view_files_in_archive.c
	gcc -c view_files_in_archive.c

check_suffix.o: check_suffix.c
	gcc -c check_suffix.c

install: build
	cp build/enp /usr/local/bin/

clean:
	rm *.o

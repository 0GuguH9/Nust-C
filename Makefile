exec = nct.out
sources = $(wildcard src/*.c) $(wildcard src/compiler/front-end/*.c) $(wildcard src/compiler/back-end/*.c)
objects = $(sources:.c=.o)
flags = -Wall -Wpedantic -Wextra -std=c99 -I./headers

$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

%.o: %.c headers/%.h
	gcc -c $(flags) $< -o $@

debug: flags += -g
debug: $(objects)
	gcc $(objects) $(flags) -o $(exec)_debug

install:
	make
	cp ./nscomp.out /usr/local/bin/nscomp

clean:
	-rm *.out
	-rm *.o
	-rm src/*.o
	-rm src/compiler/front-end/*.o
	-rm src/compiler/back-end/*.o

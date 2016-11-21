# Makefile to build Flex example

all: part1

part1: part1.c part1.h
	gcc -ll part1.c -o part1

part1.c part1.h: part1.lex
	flex part1.lex

# Utility targets
.PHONY: clean test
clean:
	rm -f part1 part1.c part1.h 

test: part1
	./run_tests.sh

# Makefile to build Flex example

all: part1

part1: part1.c part1.h
	gcc -ll part1.c -o part1

part1.c part1.h: part1.lex
	flex part1.lex

# Utility targets
.PHONY: clean test
clean:
	rm -f part1 part1.c part1.h myoutput.txt

test: part1
	./part1 < input.txt > myoutput.txt
	diff -u output.txt myoutput.txt


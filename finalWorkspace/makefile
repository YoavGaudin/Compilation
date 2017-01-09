# Makefile to build Project part1 + part2

all: rx-cc

rx-cc: parser.tab.c parser.tab.h lexical.c lexical.h parser.h
	gcc parser.tab.c lexical.c parser.c -o rx-cc

lexical.c lexical.h: lexical.lex parser.h parser.tab.h
	flex lexical.lex

parser.tab.c parser.tab.h: parser.y parser.h
	bison -d parser.y

# Utility targets
.PHONY: clean test
clean:
	rm -f lexical.c lexical.h rx-cc parser.tab.*
test: rx-cc
	./run_tests.sh

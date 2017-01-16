# Makefile to build Project part1 + part2

all: rx-cc

rx-cc: parser.tab.c parser.tab.h lexical.c lexical.h newParser.hpp
	g++ parser.tab.c lexical.c  newParser.cpp -std=c++11 -o rx-cc

lexical.c lexical.h: lexical.lex newParser.hpp parser.tab.h
	flex lexical.lex

parser.tab.c parser.tab.h: parser.y newParser.hpp
	bison -d parser.y

# Utility targets
.PHONY: clean test
clean:
	rm -f lexical.c lexical.h rx-cc parser.tab.*
test: rx-cc
	./run_tests.sh

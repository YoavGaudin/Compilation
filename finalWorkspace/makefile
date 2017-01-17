# Makefile to build Project part1 + part2

all: rx-cc

rx-cc: parser.tab.cpp parser.tab.hpp lexical.c lexical.h newParser.hpp
	g++ parser.tab.cpp lexical.c  newParser.cpp -std=c++11 -o rx-cc

lexical.c lexical.h: lexical.lex newParser.hpp parser.tab.hpp
	flex lexical.lex

parser.tab.cpp parser.tab.hpp: parser.ypp newParser.hpp
	bison -d parser.ypp

# Utility targets
.PHONY: clean test
clean:
	rm -f lexical.c lexical.h rx-cc parser.tab.*
test: rx-cc
	./run_tests.sh

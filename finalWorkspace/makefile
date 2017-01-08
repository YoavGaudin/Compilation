# Makefile to build Project part1 + part2

all: part2

part2: part2.tab.cpp part2.tab.hpp part2-lex.c part2-lex.h part2_helpers.h
	g++ part2.tab.cpp part2-lex.c part2_helpers.c -o part2

part2-lex.c part2-lex.h: part2.lex part2_helpers.h
	flex part2.lex

part2.tab.cpp part2.tab.hpp: part2.ypp part2_helpers.h
	bison -d part2.ypp

# Utility targets
.PHONY: clean test
cleanall:
	rm -f part2-lex.c part2-lex.h part2 part2.tab.*

clean:
	rm -f part2-lex.c part2-lex.h part2

test: part2
	./run_tests.sh

# Makefile for tutorial 8 example

t8: t8.h t8-lex.c t8-lex.h t8.tab.c t8.tab.h
	gcc -o $@ t8-lex.c t8.tab.c

t8-lex.c t8-lex.h: t8.lex
	flex t8.lex

t8.tab.c t8.tab.h: t8.y
	bison -d t8.y

.PHONY: clean
clean:
	rm -f t8 t8-lex.c t8-lex.h t8.tab.c t8.tab.h

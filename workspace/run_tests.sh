#!/bin/bash
make
./part1 < ./tests/example.cmm > 	 ./tests/example.out
./part1 < ./tests/example2-err.cmm > ./tests/example2-err.out
./part1 < ./tests/test1.txt > 		 ./tests/test1.out
./part1 < ./tests/test2.txt > 		 ./tests/test2.out
./part1 < ./tests/test3.txt > 		 ./tests/test3.out

echo Test example
diff ./tests/example.tokens 	 ./tests/example.out
echo Test example2
diff ./tests/example2-err.tokens ./tests/example2-err.out
echo Test test1
diff ./tests/test1.tokens	 	 ./tests/test1.out
echo Test test2
diff ./tests/test2.tokens 		 ./tests/test2.out
echo Test test3
diff ./tests/test3.tokens 		 ./tests/test3.out

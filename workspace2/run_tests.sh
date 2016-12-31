#!/bin/bash

for file in ./tests/*.cmm
do
   echo testing ${file%.cmm}
   ./part2 < $file > ./tests/result.out
   if [ -a ${file/.cmm/.tree} ]
   then 
      diff ./tests/result.out ${file/.cmm/.tree}
   else
      diff ./tests/result.out ${file/.cmm/.output}
   fi
   echo OK
done

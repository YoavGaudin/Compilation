#!/bin/bash

for file in ./tests/*.cmm
do
   echo testing ${file%.cmm}
   ./part1 < $file > ./tests/result.out
   if [ -a ${file/.cmm/.tokens} ]
   then 
      diff ./tests/result.out ${file/.cmm/.tokens}
   else
      cp ./tests/result.out ${file/.cmm/.tokens}
   fi
   echo OK
done

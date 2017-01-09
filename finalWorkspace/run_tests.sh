#!/bin/bash

for file in ./tests/*.cmm
do
   echo testing ${file%.cmm}
   ./part2 < $file > ./tests/result.out
   if [ -a ${file/.cmm/.rsk} ]
   then 
      diff ./tests/result.out ${file/.cmm/.rsk}
   else
      diff ./tests/result.out ${file/.cmm/.output}
   fi
   echo OK
done

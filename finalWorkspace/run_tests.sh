#!/bin/bash

for file in ./tests/*.cmm
do
   echo testing ${file%.cmm}
   ./rx-cc < $file > ./tests/result.out
   if [ -a ${file/.cmm/.rsk} ]
   then 
      diff ./tests/result.out ${file/.cmm/.rsk}
   else
      diff ./tests/result.out ${file/.cmm/.output}
   fi
   echo END TEST !!!!!!!!!!!!!!!!!
done

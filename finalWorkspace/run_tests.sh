#!/bin/bash

for file in ./tests/*.cmm
do
   echo testing ${file%.cmm}
   ./rx-cc < $file > ./tests/result.res
   if [ -a ${file/.cmm/.rsk} ]
   then 
      diff ./tests/result.res ${file/.cmm/.rsk}
   else
      diff ./tests/result.res ${file/.cmm/.output}
   fi
   echo END TEST !!!!!!!!!!!!!!!!!
done

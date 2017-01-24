#!/bin/bash
for file in *.cmm
do
  ../../rx-cc $file > ${file/.cmm/.log}
  if [ -a ${file/.cmm/.rsk} ]
  then
    ../../rx-linker ${file/.cmm/.rsk}
	if [ -a ${file/.cmm/.e} ]
	then
	  ../../rx-vm ${file/.cmm/.e} > ${file/.cmm/.out}
      if diff result.out ${file/.cmm/.out}
	  then
        echo ${file%.cmm} PASS
      else
        echo ${file%.cmm} FAIL
	  fi
	else
      echo ${file%.cmm} FAIL
	fi
  else
    echo ${file%.cmm} FAIL
  fi
done

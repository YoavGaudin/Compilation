#!/bin/bash
for file in *.cmm
do
  ../../rx-cc $file | tail -1 > result.out
  if diff result.out ${file/.cmm/.err}; then
    echo ${file%.cmm} PASS
  else
    echo ${file%.cmm} FAIL
  fi
done

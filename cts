#!/bin/bash
if [ $# -ne 1 ]; then
  echo "usage: cts <revision-name>" 1>&2
  exit 1
fi

g++ main.${1}.cpp &&
  oj t -d tests &&
  echo -e "// PASSED : $(date '+%Y/%m/%d %H:%M:%S')" >> $1 &&
  acc s main.${1}.cpp


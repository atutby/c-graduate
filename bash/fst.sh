#!/bin/bash

#comment
#echo "folder = ${folder}"
mkdir -p $folder && cd $folder && for i in $(seq 1 1 10); do echo 00${i}; echo $i > ${i}.in; done && cd ..

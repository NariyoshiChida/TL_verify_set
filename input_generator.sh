#!/bin/bash

#出力するファイルの数
size=5

g++ -std=c++11 math_nez_input_generator.cc -o gen

for ((i=0;i<$size;i++)) do
  sleep 1
  ./gen > $n.in
  n=$((n+1))
  echo $((i+1)) '/' $size
done

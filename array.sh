#!/bin/sh

declare -a array1=("element1" "element2" "element3")
array1[0]=one 
array1[1]=1 
echo ${array1[0]} 
echo ${array1[1]} 
declare -a array2=( one two three ) 
echo ${array2[0]} 
echo ${array2[2]} 
declare -a array3=( [9]=nine [11]=11 ) 
echo ${array3[9]} 
echo ${array3[11]} 

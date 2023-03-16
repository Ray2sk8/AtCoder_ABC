#!/bin/sh 

#echo "type the number of contest."
#read TYPE
#URDirecory=$(find -name "$TYPE" -type d)
find -name "$1" -type d
#if [ $? ]; then
    #マッチあり
#    echo "$TYPE is existed." 
#else
#    echo "$TYPE is not found."
#fi
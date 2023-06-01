#!/bin/sh 

#echo "type the number of contest."
#read TYPE
#URDirecory=$(find -name "$TYPE" -type d)
find -name "$1" -type d

cd -- ./*/"$1"

#以下の変更が必要
#alias sD_name='source sD_name.sh'

#if [ $? ]; then
    #マッチあり
#    echo "$TYPE is existed." 
#else
#    echo "$TYPE is not found."
#fi
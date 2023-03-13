#!/bin/sh 

find . -not -name "*.sh" -executable -type f -delete
echo "not deleted:" 
find . -not -name "delete_exe_file.sh" -executable -type f 
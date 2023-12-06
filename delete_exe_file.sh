#!/bin/sh 

find . -not -name "*.sh" -executable -type f -delete
find . -name ".vscode" -type d -exec rm -rf {} \;
echo "not deleted:" 
find ./ -not -name "delete_exe_file.sh" -executable -type f
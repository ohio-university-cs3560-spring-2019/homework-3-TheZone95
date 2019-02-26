#!/bin/bash

#Read directory from user
read -p "Enter a file directory (* for current directory): " filedir
#Make output
wc $filedir &> out.txt 1
#Call python command
python PrintCount.py out.txt

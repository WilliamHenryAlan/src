#!/bin/bash
echo hello $name, welcome to guess number game!
number=$(shuf -i 0-10 -n 1)
echo generate number is $number
while [[ $number -ne $input ]]
do
echo please enter the number
read input
if [[ $input -eq $number ]];then
    echo right, the number is $number
    echo "are you want to continue?(Y/N)"
    read flag
    if [[ $flag == "y" ]] || [[ $flag == "Y" ]];then 
        number=$(shuf -i 0-10 -n 1)
        continue
    else
        break
    fi
elif [[ $input -lt $number ]];then
    echo too small
else 
    echo too big 
fi
done


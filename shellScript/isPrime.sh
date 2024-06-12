#!/bin/bash

# 获取用户输入的数字
echo "请输入一个整数："
read num

# 判断输入的数字是否小于等于1
if [ $num -le 1 ]; then
    echo "$num 不是质数"
    exit
fi

# 判断输入的数字是否为质数
is_prime=true
for ((i=2; i<=num/2; i++)); do
    if [ $((num % i)) -eq 0 ]; then
    is_prime=false
    break
    fi
done

# 打印结果
if $is_prime; then
    echo "$num 是质数"
else
    echo "$num 不是质数"
fi


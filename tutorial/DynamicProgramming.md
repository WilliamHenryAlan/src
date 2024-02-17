## 动态规划 dynamic programming
>
**[leetcode 509.斐波那契数列](https://leetcode.cn/problems/fibonacci-number/)**
F(0) = 0，F(1) = 1
F(n) = F(n - 1) + F(n - 2)，其中 n > 1
---
1. naive(暴力递归)
```C++
int fib(int N) {
    if (N == 0 || N == 1) return 1; //N为0或者1 F(N)都等于1
    return fib(N - 1) + fib(N - 2); //由前两项和组成
}
```
涉及到recursion 画出树形结构 分析时间复杂度 为O(2^n)
观察递归树可得 进行了大量的重复计算
也是dp的第一个特点 重叠子问题



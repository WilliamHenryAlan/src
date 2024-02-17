## Monotone Stack（单调栈）
> 单调栈适合处理**下一个更大元素类的问题**

代码模版(Golang)
```
stack := make([]int, 0)
for i, v := range arr {
    // 当前元素比栈顶大，视为找到下一个更大元素，就弹出栈顶，更新结果
    for len(stack) > 0 && v > arr[stack[len(stack)-1]] {
        topIndex := stack[len(stack)-1]
        stack = stack[:len(stack)-1]
        // 更新结果
    }
    // 当前元素比栈顶小，直接把下标入栈
    stack = append(stack, i)
}
```

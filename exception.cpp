#include <iostream>
#include <stdexcept> // 标准异常类头文件

void divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero!"); // 抛出异常
    }
    std::cout << "Result: " << a / b << std::endl;
}

int main() {
    try {
        divide(10, 2); // 正常情况
        divide(10, 0); // 这将引发异常
    } catch (const std::runtime_error& e) { // 捕获异常
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }
    return 0;
}


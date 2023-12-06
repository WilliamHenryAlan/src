#include <iostream>
#include <random>
int main() {
	std::random_device engine;
	std::mt19937 gen(engine());
	/*
	 我们使用了`std::random_device`来生成一个随机种子。随机种子是用于初始化随机数生成器的值，它决定了随机数序列的起始点。通常情况下，我们会使用`std::random_device`来获取真正的随机种子，以确保生成的随机数是真正随机的。`std::mt19937`作为随机数引擎。`mt19937`是Mersenne Twister算法的一种实现，它是一个高质量的随机数发生器，能够产生高质量的随机数序列。
	 */

	std::uniform_int_distribution<> distrition(0,99);
	int randomNumber = distrition(gen);

	std::cout << "random number = " << randomNumber << std::endl;
	return 0;
}

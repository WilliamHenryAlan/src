/*
 1.mutable使常量成员函数的变量可变
 2.主要用法在成员函数和lambda匿名函数
 3.初始化列表只存在于constructure (function)
 */
#include <iostream>
class entity {
private:
	std::string m_name;
	mutable	bool m_debug;
public:
	entity() :m_name("default"),m_debug(false){}
	const std::string& getName_const() const {	//const function
		m_debug = true;
		return this->m_name;
	}
	const std::string& getName_nonconst() {		//non const function
		return m_name;
	}
};

int main() {
	entity e;
	const entity ce;
	ce.getName_const();
	//ce.getName_nonconst();	//invalid
	int x = 0;
	auto f = [&]() mutable {	//lambad表达式
		x++;
	};
	f();
	std::cout << "x = " << x << std::endl;
}

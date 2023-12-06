/*
 1.c++只会做一次implicit conversion
 2.“abc”这种常量字符串是const chat[]类型 不是std::string
 3.明白显示转化构造函数的存在和含义
 */
#include <iostream>
class entity{
private:
	std::string m_name;
	int m_age;
public:
	entity(const std::string& name):m_name(name),m_age(-1){}
	explicit entity(int age):m_name("Unknow"),m_age(age){}
};
int main() {
	//entity a = 10;	//因为explicit entity(int age):m_name("Unknow"),m_age(age){}构造函数说明了必须显示转化
	//entity b = "alan" //c++会进行一次implicit conversion "alan"是const char[]类型
	entity b = std::string("alan"); 	//const char[] => 显示转化 std::string => 隐式转化entity()
	entity c = entity("alan");
}

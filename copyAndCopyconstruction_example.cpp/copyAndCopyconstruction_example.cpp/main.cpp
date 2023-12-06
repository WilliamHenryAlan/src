//关于深拷贝浅拷贝
#include <iostream>
#include <string>
class String {
private:
	char* m_buffer;
	int m_size;
public:
	String(const char* str) {
		m_buffer = new char[m_size+1];	//多一个'\0'
		m_size = strlen(str);	//strlen()不包括最后的'\0'

		//memcpy(m_buffer, str, m_size+1);	//两种实现方式都可以
		memcpy(m_buffer, str, m_size);
		m_buffer[m_size] = 0;//implicit coversion 加上最后的'\0'
	}
	~String() {
		delete [] m_buffer;
	}

	//String(const String& str) = delete;//类似这样的做法有std::unique_ptr 删除了赋值和拷贝的操作 达到独占
	//c++提供的缺省拷贝构造函数和赋值函数 都是by value
	//如果有成员申请动态分配内存 析构函数中释放了内存的 需要自定义拷贝构造函数和重载赋值操作 防止内存泄漏
	//拷贝构造函数
	String(const String& str) :m_size(str.m_size){
		this->m_buffer = new char[m_size+1];
		memcpy(this->m_buffer, str.m_buffer, m_size+1);
	}
	//assignment
	String& operator=(const String& str) {
		m_size = str.m_size;
		m_buffer = new char[m_size+1];
		return *this;
	}
	//overloading operator []
	char& operator[](int index) {
		return m_buffer[index];
	}
	//友元函数打印
	friend std::ostream& operator<<(std::ostream& stream,const String& str);
};
std::ostream& operator<<(std::ostream& stream,const String& str) {
	stream << str.m_buffer;
	return stream;
}
int main() {
	//test
	String str("hello");
	String copy(str);
	String assign("none");
	assign = str;
	copy[2] = 'a';
	std::cout << str << std::endl;
	std::cout << copy << std::endl;
}

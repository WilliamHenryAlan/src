#include <iostream>
using namespace std;
int main() {
	int num = 123456;
	int digit = num % 10;	//通过对10取余可以取到低位
	cout << "digit = " << digit << endl;	//通过/10可以去掉低位 再%10即可得到十位
	cout << "decade = " << num/10%10 << endl;	//类似
	cout << "hundred = " << num/100%10 << endl;
	cout << "thousand = " << num/1000%10 << endl;
}

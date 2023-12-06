
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double pi=M_PI;	//mathematical pi
	double acos = std::acos(-1.0); //calculate pi
	std::cout << "PI = " << pi << std::endl;
	std::cout << "acos = " << acos << std::endl;
	cout << "1. 数值操作函数\
	" << endl;
	cout << "绝对值abs(-10) => " << std::abs(-10)  << endl;
	cout << "浮点数绝对值fabs(-3.14) => " << std::fabs(-3.14) << endl;
	cout << "浮点数取余fmod(123.123,2.2) => " << std::fmod(123.123,2.2) << endl;

	cout << "2. 指数和对数函数\
	 " << endl;
	cout << "e的x次幂exp(2.2) => " << std::exp(2.2) << endl;
	cout << "以e为底的对数log(10.0) => " << std::log(10.0) << endl;
	cout << "以10为底的对数log10(100) => " << std::log10(100) << endl;
	cout << "x的y次幂power(10,3.2) => " << std::pow(10, 3.2) << endl;

	cout << " => " << endl;
	cout << " => " << endl;
	cout << " => " << endl;
	cout << " => " << endl;
	cout << " => " << endl;


	cout << endl;
}
//   - `sqrt(x)`: 返回 x 的平方根。
//
//3. 三角函数：
//   - `sin(x)`: 返回 x 的正弦值。
//   - `cos(x)`: 返回 x 的余弦值。
//   - `tan(x)`: 返回 x 的正切值。
//   - `asin(x)`: 返回 x 的反正弦值。
//   - `acos(x)`: 返回 x 的反余弦值。
//   - `atan(x)`: 返回 x 的反正切值。
//
//4. 取整函数：
//   - `ceil(x)`: 返回不小于 x 的最小整数。
//   - `floor(x)`: 返回不大于 x 的最大整数。
//   - `round(x)`: 返回最接近 x 的整数。
//   - `trunc(x)`: 返回 x 的整数部分。

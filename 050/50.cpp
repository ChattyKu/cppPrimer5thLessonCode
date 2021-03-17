// 类型转换
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 类型不同的时候，大部分时候会将值转换为int类型来进行计算
// 含有bool类型的表达式中，会将所有的非bool类型转换为bool类型
// 在赋值过程中右侧转换为左侧类型
// 算数运算中、或关系运算中需要将类型统一


int main()
{
	int a = 15;
	int b = a / 3;
	cout << b << endl;
	
	int c = a / 3.0;
	cout << c << endl;
	
	cout << a / 3.0 << endl;
}
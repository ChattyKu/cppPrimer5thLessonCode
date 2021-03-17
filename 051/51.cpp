// 类型转换-显式转换

#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;
// typename(vale)
// (typename) vale
// static_cast    dynamic_cast   const_cast   reinterpret_cast   C++显示类型转换符号
int main()
{
	int a = 10, b = 4;
	cout << static_cast<double>(a) / b << endl;
	cout << (double)a / b << endl;
	
	const char *pc;
	char *p = const_cast<char*>(pc);
	// 

}
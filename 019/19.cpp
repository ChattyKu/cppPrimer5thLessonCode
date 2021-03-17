// const 引用

#include <iostream>

int main()
{
	const int ival = 24;
	const int &refival = ival;
	
	// refival = 3;
	
	// 引用不能随便改变被引用的对象
	
	int ival1 = 4;
	int ival2 = 5;
	int & refivals = ival1;
	refivals = ival2; // 并不是改变被引用的对象，  使用ival2的值，赋值给refivals
	
	refivals = 10;
	
	std::cout << "ival1:" << ival1 << ",ival2:" << ival2 << std::endl;
	
	int a = 24;
	const int &crefival = a;
	
	
	std::cout << "ival1:" << crefival << std::endl;
	// crefival = 4;
	a = 15;
	std::cout << "ival1:" << crefival << std::endl;
	
	
	
	
	return 0;
}
// 复合类型--引用

#include <iostream>


int main()
{
	int ival = 1024; // 整型
	int & refival = ival; // 整型的引用
	
	std::cout << ival << std::endl;
	
	refival = 2048;
	std::cout << refival << std::endl;
	std::cout << ival << std::endl;
	
	int ival2 = 3;
	refival = ival2;
	
	std::cout << refival << std::endl;
	
	//int &refival2;
}
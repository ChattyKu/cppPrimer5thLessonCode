// 类

// 让自己定义的数据结构象内置类型一样使用顺畅。

// 1. 类名  2. 定义在哪里   3. 支持什么样的操作。

#include <iostream>	// 尖括号，先从系统目录开始查找
#include "Sales_item.h"	// 双引号，先从自定义目录中开始查找


int main()
{
	int ival;
	Sales_item book;
	std::cin >> book;
	
	std::cout << book << std::endl;
	
	return 0;
}
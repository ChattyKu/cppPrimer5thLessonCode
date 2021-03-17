// ISBN函数调用，返回当前的ISBN号
// << 输出
// >> 接收输入
// + 将两个对象相加
// += 将对象叠加到另一个对象上

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	
	if(item1.ISBN() == item2.ISBN())
	{
		std::cout << item1 + item2 << std::endl;
	}
	else
	{
		std::cerr << "Data must refer to same ISBN" << std::endl;
		return -1; // 程序运行失败了
	}
	
}
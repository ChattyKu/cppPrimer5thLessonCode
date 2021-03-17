// 自己的头文件   1. 隔离实现与声明， 条理清晰，很好的表达功能含义  保护实现代码
//				  2. 重复利用

#include <iostream>
#include <string>

#include "Sales_data.h"

#include "Sales_data.h"




int main()
{
	int ival = 1;
	//int ival = 2;
	Sales_data data1, data2;
	std::cin >> data1.bookNo >> data1.units_sold >> data1.revenue;
	std::cin >> data2.bookNo >> data2.units_sold >> data2.revenue;
	
	if(data1.bookNo == data2.bookNo)
	{
		std::cout << data1.bookNo << " " << data1.units_sold + data2.units_sold << std::endl;
	}
	else
	{
		std::cout << "ISBN is not same" << std::endl;
	}
	
	return 0;
}
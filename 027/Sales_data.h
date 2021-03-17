
#ifndef __SALES_DATA_H__ //如果没有定义  预处理器
#define __SALES_DATA_H__ //定义一个预处理器值

#pragma once 

#include <string>

struct Sales_data
{
	std::string bookNo;
	int units_sold = 0;
	double revenue = 0.0;
};

#endif // __SALES_DATA_H__ // 结束IF
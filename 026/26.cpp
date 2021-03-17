// 定义一个自己，全新类型

#include <string>
#include <iostream>

struct Sales_data
{
	std::string bookNo;
	unsigned int units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data s_data;
	std::cin >> s_data.bookNo >> s_data.units_sold >> s_data.revenue;
	
	
	std::cout << s_data.bookNo << " " << s_data.units_sold << " "  << s_data.revenue;
	
	return 0;
}
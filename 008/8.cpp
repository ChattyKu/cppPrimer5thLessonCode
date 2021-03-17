
#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total; 	// 保存下一条交易记录
	if (std::cin >> total)
	{
		Sales_item trans; 	//保存和的变量
		while(std::cin >> trans)
		{
			if (total.ISBN() == trans.ISBN())
			{
				total += trans;		// 更新信息
			}
			else
			{
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
	}
	else
	{
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
}
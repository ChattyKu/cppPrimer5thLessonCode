// 条件分支

// 根据条件的不同，来选择不同的运行分支

#include <iostream>

int main()
{
	int currVal = 0, val = 0;
	if(std::cin >> currVal)
	{
		int cnt = 1;		// 保存当前在处理的值次数
		while(std::cin >> val)	// 读取
		{
			if (val == currVal)	// 判断是否与当前的值是否相同
			{
				++cnt;
			}
			else
			{
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
	}
	return 0;
}
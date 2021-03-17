// auto 

#include <iostream>

int fun()
{
	return 3;
}

int main()
{
	int a = fun();
	auto val = fun();
	auto i = 0, *p = &i;
	// auto j;
	
	// 引用类型
	{
		int i = 0, &r = i;
		auto a = r;		// a是整数 
		i = 15;
		std::cout << " i: " << i << std::endl;
		std::cout << " r: " << r << std::endl;
		std::cout << " a: " << a << std::endl;
	}
}
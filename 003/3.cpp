// while / for

#include <iostream>		// include是一个包含关键字，他用来包含需要使用的东西
						// iostream  是声明输入及输出的文件，包含了它才能使用输入和输出

int main()
{
	int sum = 0, val = 1;
	while (val <=10) // 括号内的表达式结果必须是bool或可以转换成bool
	{
		sum += val; // += 这个运算符，相当于 sum = sum + val;
		++val;		// val = val + 1
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	
	int sumf = 0;
	for(int valf = 1; valf <= 10; ++valf)
	{
		sumf += valf;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sumf << std::endl;
	
}
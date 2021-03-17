// 递归调用
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 阶乘   
// 从给定数字开始与每次递减一个的数字相乘，直到数字为1
// 5   5 * 4 * 3 * 2 * 1

int factorial_(int val)
{
	int res = 1;
	
	for(int i = 1; i <= val; ++i)
	{
		res *= i;
	}
	return res;
}

int factorial(int val)
{
	if (val > 1)
	{
		return factorial(val -1) * val;
	}
	return 1;
}

// 逻辑清晰， 编码复杂度要低  ， 对一些特别的容器中使用较广泛
// tree型结构
// 占用栈上的空间，并且会有效率问题



int main()
{
	cout << factorial_(5) << endl;
	
	cout << factorial(5) << endl;
	return 0;
}
// 递归调用
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 求阶乘结果  （!5 = 5 * 4 * 3 * 2 * 1）
// 退出条件 (一定要有的)
int factorial(int val)
{
	if(val > 1)
	{
		return factorial(val - 1) * val;
	}
	return 1;
}

int main()
{
}
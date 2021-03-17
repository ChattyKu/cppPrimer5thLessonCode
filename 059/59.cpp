// 函数基础

#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 函数调用过程中，需要完成的两个步骤
// 1. 使用实参对形参进行初始化
// 2. 将控制权转移给被调用的函数

int fact(int val) // 形参  形式参数
{
	static int callFuncationTimes = 0; // 调用的次数
	cout << "call this funcation " << ++callFuncationTimes << " times." << endl;
	int ret = 1;
	while( val > 1)
	{
		ret *= val--;
	}
	return ret;
}

int main()
{
	cout << fact(5) << endl;
	cout << fact(6) << endl;
	cout << fact(2) << endl;
	cout << fact(9) << endl;
}
// 函数声明
#include <string>
#include <vector>
#include <iostream> // 从系统路径查找
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// int max(int a, int b); // 函数签名

#include "max.h"	// 从当前路径查找
#include "max_.h"	// 从当前路径查找

int main()
{
	int a = 3;
	cout << max( 4, 5) << endl;
	cout << max( 7, 8, 9) << endl;
}

// int max(int a, int b)
// {
// 	return a > b ? a : b;
// }

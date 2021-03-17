// 函数声明

#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;


#include "max_.h"
#include "max.h"

// int max(int, int); // 函数签名

int main()
{
	cout << max(4, 6) << endl;
	cout << max(7, 8, 9) << endl;
}

// int max(int a, int b) // 函数定义
// {
	// return a > b ? a : b;
// }
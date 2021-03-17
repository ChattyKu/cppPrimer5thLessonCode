// 构造、 拷贝、赋值 和 析构
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>

#include "Sales_data.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 生命周期
// 构造函数的声明方法  与类名相同，不需要返回值


int main()
{
	Sales_data item;
	Sales_data item1("test");
	~Sale_data(){}; // 析构函数
	cout << "item bookNo is :" << item.bookNo << endl;
	cout << "item1 bookNo is :" << item1.bookNo << endl;
	return 0;
}
// 函数重载
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 在同一个作用域下   函数名称相同    参数列表不同

int max(int a, int b)
{
	return a > b ? a : b;
}

// int max(const int a, const int b)  // const 不能参与重载  ？？？？
// {
// 	return a > b ? a : b;
// }

int max(int *a, int *b)
{
	return *a > *b ? *a : *b;
}

int max(int const * a, int const * b) // 重载成功的  底层const
{
	return *a > *b ? *a : *b;
}

// int max(int * const a, int * const b) // 重载失败的  顶层const
// {
// 	return *a > *b ? *a : *b;
// }

int max(int a, int b, int c)
{
	return a > b ? (a > c ? a : c) : ( b > c ? b : c );
}

int max(float a, float b)
{
	return a > b ? a : b;
}

int max(double a, double b)
{
	return a > b ? a : b;
}

int max(int a, double b)
{
	return a > b ? a : b;
}

int max(double a, int b)
{
	return a > b ? a : b;
}

// const



int main()
{
	
}
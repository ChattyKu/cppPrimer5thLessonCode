// 函数匹配
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 

// 函数名称 可以确定一个重载集  
//    (1) 函数同名
//    (2) 调用点作用域内可见

// 参数的考察
//    (1) 参数的数量相等
//    (2) 每个实参类型与对应的形参类型相同或者可转换。

// 寻找最佳匹配
//    (1) 类型的精确匹配

// 1. 类型相同、从数组或函数类型转换为指针、顶层const
// 2. 通过const转换
// 3. 类型提升
// 4. 算数类型转换
// 5. 类类型转换


void f(){};
void f(int){};
void f(int, int){};
void f(double, double = 3.14){};
//void f(double, int = 15){};


int main()
{
	f(5.6);
	return 0;
}
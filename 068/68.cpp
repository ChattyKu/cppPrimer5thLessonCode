// 返回数组
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;
// 不能直接返回数组
// 返回的应该是指针或引用
// 不能返回局部变量的数组

int (*func(int))[10];

using arrT = int[10];
arrT* func(int i);

// C++ 11
// 尾置返回值类型
auto func(int i) -> int(*)[10];

int odd[] = {1,3,5,7,9};
int even[] = {2,4,6,8,0};

decltype(odd) *arrPtr(int i)
{
	return (i % 2) ? &odd : &even;
}

int main()
{
	
	
}
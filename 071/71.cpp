// 特殊用途的语言特性  默认实参、内联函数 constexpr函数
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

typedef string::size_type sz;

string screen(sz ht, sz wid, char backgrnd = 'a');

string screen(sz ht, sz wid = 12, char backgrnd);


string screen(sz ht, sz wid, char backgrnd )
{
	char buff[512] = {0};
	sprintf(buff, "ht = %d, wid = %d, backgrnd:%c;", ht, wid, backgrnd);
	
	return buff;
}

// 控制权  
// 上层函数将控制权转一给本函数
// 将控制权转返回回去

inline int max (int a, int b)
{
	return a > b ? a : b;
}

// constexpr函数
// 可用于常量表达式的函数
// 约定1. 返回值类型是字面值类型
// 约定2. 函数体中有且仅有一条return语句

constexpr int new_sz(){ return 42;}

constexpr size_t scale(size_t cnt) { return new_sz() * cnt; }


int main()
{
	cout << screen(0) << endl;;
	const size_t len = scale(2);
	int a = 10;
	const size_t len2 = scale(a);
	int ArrL1[scale(2)];
	int ArrL2[scale(a)];
	
	cout << "const value len = " << len << ", len2 = " << len2;
	return 0;
}
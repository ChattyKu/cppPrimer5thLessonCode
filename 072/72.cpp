// 调试帮助
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include <cassert>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// assert(expr);
// 全局的开关

int main()
{
	string str("hell world!");
	assert(str.length() < 5);
	return 0;
}
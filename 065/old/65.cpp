// 可变参函数
#include <string>
#include <vector>
#include <iostream>
#include <stdarg.h>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 日志输出  
// 实现方式  有 3 种  
// C的方式
int sum(int count, ... )
{
	va_list ap;
	va_start(ap, count);
	
	int sum = 0;
	for (int i = 0; i < count; ++i)
	{
		sum += va_arg(ap, int);
	}
	
	va_end(ap);
	// "%s %d %f"
	return sum;
}

// C++11特性
void print_msg(std::initializer_list<string> il)
{
	for(auto beg = il.begin(); beg != il.end(); ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
}


int main(int argc,  char *argv[] )
{
	
	cout << sum(9,1,2,3,4,5,6,7,8) << endl;
	print_msg({"test", "message", "print"});
}
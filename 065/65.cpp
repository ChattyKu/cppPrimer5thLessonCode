// 可变参函数
#include <string>
#include <vector>
#include <iostream>
#include <stdarg.h>
#include <stdarg.h>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 日志的输出  常见的引用场景
// 3种   本节课介绍2种
int sum(int count, ...)
{
	va_list ap;
	va_start(ap, count);
	int sum = 0;
	for(int i = 0; i < count; ++i)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return sum;
}

void print_msg(std::initializer_list<string> il)
{
	for(auto beg = il.begin(); beg != il.end(); ++ beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
}

int main()
{
	cout << sum(9, 1, 2, 3, 4, 5, 6, 7, 8, 9) << endl;
	print_msg({"test", "message", "print", "logs"});
	return 0;
}
// 函数的返回值
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 有返回值
// 无返回值
// 将内部变量复制，并返回
// 不可返回局部变量的引用或指针

void swap(int & a, int& b)
{
	if(a == b)
	{
		return;
	}
	
	int tmp = b;
	b = a;
	a = tmp;
}

int& max(int a, int b)
{
	int max = a > b ? a : b;
	return max;
}

vector<string> process()
{
	return {"str1", "str2", "str3"};
}

string & moreSize(string str1, string str2)
{
	string tmp = "";
	if ( str1.length() > str2.length())
	{
		tmp = str1;
	}
	else
	{
		tmp = str2;
	}
	return tmp;
}

int main()
{
	cout << max(1, 2) << endl;
	cout << moreSize("testStr1", "testStr2") << endl;
	
	for(string s : process())
	{
		cout << s << endl;
	}
	return 0;
}
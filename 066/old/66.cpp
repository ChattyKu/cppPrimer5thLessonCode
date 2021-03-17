// 函数的返回值
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

void swap(int &v1, int &v2)
{
	if ( v1 == v2 )
		return;
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
}

int sum (int a, int b)
{
	return 3.0 / 2;
}

// C++11
vector<string> funA()
{
	return {"abc", "def"};
}

// 不要返回临时变量的引用或指针

string * sum()
{
	string sum("sum string");
	return &sum;
}

int main()
{
	cout << *sum() << endl;
}
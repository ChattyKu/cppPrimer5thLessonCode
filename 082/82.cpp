#include <string>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Test
{
public:
	Test(int val, string strB): conA(val), refB(strB)
	{
		a = val; 
		b = strB; 
	};
	Test() : a(0), b("test"),conA(0), refB(b) {};/* 初始化 */
	Test(int val): conA(val),refB(std::string("abc")){Test(val, "abc");}
private:
	int a;
	string b;
	const int conA;
	string &refB;
};

class TestB
{
private:
	Test test;
};


int main()
{
	int a = 0;
	string bar = "Hello World!";
	Test test;
	Test test1[10];
	TestB testb;
	return 0;
}


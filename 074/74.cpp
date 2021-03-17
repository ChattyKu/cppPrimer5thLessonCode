// 函数指针
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

bool lengthCompare(const string &str1, const string &str2)
{
	return str1.length() > str2.length();
}

bool (*pf)(const string&, const string&) = lengthCompare;

void useBigger(const string &s1, const string &s2,
			bool (*pf)(const string&, const string &))
			{
				if(pf(s1, s2))
				{
					cout << "TRUE" << endl;
				}
				else
				{
					cout << "FALSE" << endl;
				}
			}

int (* f1(int)) (int *, int);

auto f1(int) -> int (*)(int *,int);

int main()
{
	cout << lengthCompare("1234", "123") << endl;
	cout << pf("123", "123") << endl;
	useBigger("1234", "1234", pf);
	return 0;
}
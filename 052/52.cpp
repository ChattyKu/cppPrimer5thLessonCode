// 简单的语句

#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int ival = 0;
	ival + 5;
	cout << ival;
	;// 空语句
	string s;
	string sought = "test";
	while(cin >> s && s != sought) // 接收指定的字符退出循环，否则一直接收字符
		;
		
	vector<string> svec;
	auto iter = svec.begin();
	
	while(iter != svec.end()) ; // 循环语句是空
		++iter; // 非循环语句
		
	for(int i = 0; i < 10; ++i)
	{
		
	}
}
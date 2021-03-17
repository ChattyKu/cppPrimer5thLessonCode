// C风格字符串

#include <string>

#include <iostream>

using std::string;
using std::cout;
using std::endl;


int main()
{
	char c = 'a';
	string s = "string";
	char cArr[3] = {'C', '+', '+'}; // 字符串数组
	
	char cArr1[4] = "C++"; // \0 结尾
	
	cout << cArr << endl;
	
	cout << strlen(cArr1) << endl;
	cout << strlen(cArr) << endl;
	
}
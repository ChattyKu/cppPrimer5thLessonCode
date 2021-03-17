#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1 = "123";
	string s2 = "456";
	if (s1.compare(s2) == 0) { // 这种效率上会更好。
		cout << "compare" << endl;
	}
	++i; // for循环中建议这样写
	i++; // 不建议
	
	if (s1 == s2 ) { // 实现过程中，==重载内部调用的是  compare == 0
		cout << "compare" << endl;
	}
	
	
}
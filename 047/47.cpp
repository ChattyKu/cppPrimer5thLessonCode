// 成员访问运算符
// 条件运算符

#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
	string str("hell world");
	int size = str.size();
	vector<string> strVec;
	strVec.push_back("hello world");
	auto it = strVec.begin();
	*it;
	(*it).size();
	it->size();
	
	//   ? : 
	int a = 6, b = 4;
	int c = a > b ? a : b; // 计算问号前的结果，为true则返回冒号左侧的内容，为false则返回冒号右侧内容。
	
	
	cout << c << endl;
	cout << c >= 60 ? "pass" : "fail" << endl;
}
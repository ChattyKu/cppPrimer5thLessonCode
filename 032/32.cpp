// 迭代器  标准库容器类型的通用访问机制

#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> ivec = {1,2,3,54,56,6,7,8,9};
	for(vector<int>::iterator it = ivec.begin(); it != ivec.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
	for(auto it = ivec.rbegin(); it != ivec.rend(); ++ it)
	{
		cout << *it << " ";
	}
	cout << endl;
	string str1 = "testiterator";
	
	for (auto it = str1.begin(); it != str1.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
	
	for(auto it = str1.rbegin(); it != str1.rend(); ++ it)
	{
		cout << *it << " ";
	}
}
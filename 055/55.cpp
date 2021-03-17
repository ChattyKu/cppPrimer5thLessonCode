// for   while

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
	// for(初始化；判断条件；迭代表达式)
	// {
	// 	
	// }
	// 
	// while(判断条件)
	// {
	// 	
	// }
	
	vector<int>  ivec;
	
	for(int i = 0; i < 10; ++i)
	{
		ivec.push_back(i);
	}
	
	auto it = ivec.begin();
	while(it != ivec.end())
	{
		cout << *it++ << " ";
	}
	cout << " read end!"<< endl;
	
	for(auto r : ivec)
	{
		cout << r << " ";
	}
	cout << endl;
	
	do{ // 会先运行一次循环体，再进行条件表达式的判断
		
	}while(条件);
	
}
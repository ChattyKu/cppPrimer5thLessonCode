// 迭代器的运算

#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	// 使用迭代器于一个整数进行计算 进行跳跃操作
	
	// 对两个迭代器的位置进行比较
	
	// 二分搜索法  有序容器
	// 1 2 3 4 5 6 7 8 9 10
	
	vector<int> ivec = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	
	int sought = 8;
	
	auto beg = ivec.begin(), end = ivec.end();
	auto mid = ivec.begin() + (end - beg) / 2;
	while(mid != end && *mid != sought)
	{
		cout << "1 begin:" << *beg << ",mid:" << *mid;
		if(end != ivec.end())
		{
			cout << ",end:" << *end;
		}
		cout << endl;
		if(sought < *mid)
		{
			end = mid;
		}
		else
		{
			beg = mid + 1;
		}
		mid = beg + (end - beg) / 2;
		cout << "2 begin:" << *beg << ",<:" << *mid ;
		if(end != ivec.end())
		{
			cout << ",end:" << *end;
		}
		cout << endl;
	}
	
}
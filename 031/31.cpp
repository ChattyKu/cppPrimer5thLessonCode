
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	// 1 - 100
	vector<int> ivec;
	for(int i = 1; i <= 100; ++i)
	{
		ivec.push_back(i);
	}
	
	for(int i = 0; i < ivec.size(); ++i)
	{
		cout << ivec[i] << " ";
		if(0 == i % 10 )
		{
			cout << endl;
		}
	}
	
	cout << ivec[101];
	
	// 下标的有效性由编码者保证，编译器不提供检查
	// 下标不可以用作添加
}

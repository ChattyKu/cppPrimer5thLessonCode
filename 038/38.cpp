// 多维数组

// 长宽高  3维

// int iArr[10]; // 10个连续的int值

//  1 1 1 1 1 1 1 1 1 1
//  1 1 1 1 1 1 1 1 1 1
//  1 1 1 1 1 1 1 1 1 1
//  1 1 1 1 1 1 1 1 1 1
//  1 1 1 1 1 1 1 1 1 1

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int iArr[3][4] = 
	{
		{0,1,2,3},
		{4,5,6,7},
		{8,9,0,1}
	};
	
	int iArr2[3][4] = {0,1,2,3,4,5,6,7,8,9,0,1};
	
	
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			cout << "iArr:" << iArr[i][j] << ", iArr2:" << iArr2[i][j] << endl;
		}
	}
	
}
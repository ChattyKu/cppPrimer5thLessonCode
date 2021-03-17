// 多维数组和指针的关系

// int a[] = {1,2,3};
// int *p = a;

#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
	int iArr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	int (*p)[4] = iArr; // 指向4个int组成的  数组的指针
	p = &iArr[2];
	//int *p[4];	// p代表的是，一个由int指针组成的数组，有4个元素  指针的数组
	
	//vector<vector<int> >
	
	for(auto p = std::begin(iArr); p != std::end(iArr); ++p )
	{
		for(auto q = std::begin(*p); q != std::end(*p); ++q)
		{
			cout << *q << endl;
		}
	}
}
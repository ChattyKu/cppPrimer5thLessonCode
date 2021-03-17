// 数组参数
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 1. 不能进行拷贝 不能进行 = 的操作
// 2. 使用时，一般会将数组转换为指针类型  数组首元素的地址

// void print(const int *){};
// void print(const int[]){};
void print(const int[10]){};

// 1. 使用标记
void print(const char *cp)
{
	if(cp)
	{
		while(*cp)
		{
			cout << *cp++;
		}
	}
}

// 2. 给定范围
void print(const int *beg, const int *end)
{
	while(beg != end)
	{
		cout << *beg++ << endl;
	}
}

// 3. 指定大小
void print(const int* p, int len)
{
	for (int i = 0; i < len; ++i)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}



int main()
{
	int i = 0;
	int j[2] = {1, 2};
	print(&i);
	print(j);
	print(std::begin(j), std::end(j));
	return 0;
}
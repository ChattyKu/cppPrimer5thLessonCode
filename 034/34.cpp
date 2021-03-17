// 数组

// 象vector 
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main()
{
	int arr[10]; // 一个长度为10的int型数组
	constexpr int len = 20;
	int arr1[len] = {9};
	
	string strArr[len] = {"test", "test1"};
	
	for(int i = 0; i < len; ++i)
	{
		cout << "index:" << i << ":" << strArr[i] << endl;;
	}
	
	for(int i = 0; i < len; ++i)
	{
		cout << "index:" << i << ":" << arr1[i] << endl;
	}
	
	int *ptrs[10];	// 含有10个整型指针的数组   指针的数组
	// int &refs[10];	// 引用不存在数组的形式
	int (*Parray)[10]; // 指向一个含有10个整数的数组   数组的指针
	int (&arrRef)[20] = arr1; // 引用一个含有10个整数的数组
	
}
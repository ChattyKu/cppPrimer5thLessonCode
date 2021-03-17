// main函数 完整形式
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 多维数组参数
void print(int (*matrix)[10], int rows){}
// int (*matrix)[10]	// 指向含有10个整数的数组的指针
// int *matrix[10];		// 10个指针构成的数组



int main(int argc, char *argv[])
{
	for(int i = 0; i < argc; ++i)
	{
		cout << "param" << i << ":"<< argv[i] << ";" << endl;
	}
	return 0;
}
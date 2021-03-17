// 参数传递
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 1. 值传递
int max(int a, int b)
{
	a = 3;
	b = 4;
	return a > b ? a : b;
}


// 2. 引用传递
void swap(int &a, int &b)
{
	int tmp = a;
	cout << "run swap" << endl;
	a = b;
	b = tmp;
}
// 3. 指针传递
void swap(int *a, int *b)
{
	int tmp = *a;
	cout << "run swap with point args" << endl;
	*a = *b;
	*b = tmp;
}

int main()
{
	cout << max(9, 6) << endl;
	int a = 3;
	int b = 4;
	cout << "befor swap a=" << a << ",b=" << b << endl;
	swap(a, b);
	cout << "after swap a=" << a << ",b=" << b << endl; 
	swap(&a, &b);
	cout << "after swap a=" << a << ",b=" << b << endl; 
	
	return 0;
}
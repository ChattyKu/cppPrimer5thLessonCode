// 无类型

#include <iostream>

int main()
{
	void * pv;
	int a = 3;
	float b = 3.3f;
	double d = 3.14;
	
	pv = &a;
	pv = &b;
	pv = &d;
	// 比较  输出
	
	int *p1, *p2;	// p2是一个整型数据
	
	p1 = &a;
	p2 = &a;
	
	int i = 1024, *p = &i, &r = i;
	
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;
	// ppi		pi		ival
	// [&pi] [&ival]   [1024]
	
	// 指针的引用
	int i2 = 42;
	int *p3;
	int *&rp = p3;
	rp = &i2;
	*rp = 0;
	std::cout << i2 << std::endl;
}
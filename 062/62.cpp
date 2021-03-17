// const参数
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// const 顶层   底层

void fcn(const int i)
{
	int a = i;
	cout << "void fcn(const int i)" << endl;
}

void fcn(const int * pi)
{
	
}

// 为了在参数传递过程中保持高效，尽量使用指针或引用传递。
// 这个做法主要是针对对象占用空间较大的类型，基本数据类型两种
// 传递方式的效率无太大差别。
// 在指针或引用型参数不需要进行修改的时候尽量加上const的限定


int main()
{
	const int ci = 42;
	int i = ci;
	const int ci1 = i;
	fcn(i);
	int * const p = &i;
	int * p1 = &i;
	fcn(p);
	fcn(p1);
	*p = 0;
	
}
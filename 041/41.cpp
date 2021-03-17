// 优先级、结合律、求值顺序

// 3 + 4 * 5    23  4 * 5  
// 20 - 15 - 3  2

#include <iostream>
using std::cout;
using std::endl;

int f()
{
	cout << "f" << endl;
	return 1;
}

int f1()
{
	cout << "f1" << endl;
	return 2;
}

int main()
{
	int ia[] = {0,2,4,6,8};
	int last = *(ia + 4);
	cout << last << endl; // last = 8;
	last = *ia + 4;
	cout << last << endl; // last = 4;
	
	int ival = f() * f1();
	
	int i = 0;
	cout << i << " " << ++i << endl;
}
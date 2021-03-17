// using声明
#include <iostream>

//using namespace::name;
using std::cin;	 // using声明 ，不可以出现在头文件中
using std::cout;
using std::endl;

int main()
{
	int i ;
	cin >> i;
	cout << i << endl;
	return 0;
}
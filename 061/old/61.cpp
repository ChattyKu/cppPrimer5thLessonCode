// 参数传递
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;


int max(int a, int b)
{
	return a > b ? a : b;
}

int pow(int a)
{
	a *= a;
	return a;
	
	// return a * a;
}

void pow_is(int& a)
{
	a *= a;
	//return a;
	
	// return a * a;
}

// 值传递
// 引用传递

int main()
{
	int a = 12, b = 5;
	cout << max(a, b) << endl;
	cout << max(13, 19) << endl;
	
	cout << "pow a " << pow(a) << endl;
	cout << "a value "<< a << endl;
	
	
	pow_is(a);
	cout << "a value "<< a << endl;
}
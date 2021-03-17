// 算术运算符

// +(正号)  -（负号）  *（乘） /（除）%（模运算/取余） +（加） -（减）
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	cout << "24 / 9 = " << 24 / 9.0 << endl;
	cout << "21 % 3 = " << 21 % 3 << endl;
	
	short sval = 32767; // int  long  long long 
	
	cout << "32767 + 1 = " << ++sval << endl;
	cout << "32767 + 1 = " << sval + 1 << endl;
}
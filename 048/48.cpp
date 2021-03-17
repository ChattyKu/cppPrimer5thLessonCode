// 位运算符


//  ~ 位求反    << 左移   >>  右移   & 位与  |位或  ^位异或

// 


#include <iostream>
using std::cout;
using std::endl;

int main()
{
	unsigned short sval = 8;
	unsigned short sval2 = ~sval;
	
	cout << "val:" << sval << ",val2:" << sval2 << endl;
	
	sval = 8;
	sval2 = sval << 2;
	
	cout << "val:" << sval << ",val2:" << sval2 << endl;
	
	sval = 8;
	sval2 = sval >> 2;
	
	cout << "val:" << sval << ",val2:" << sval2 << endl;
	
	sval = 8;
	sval2 = sval & 0xFF;
	cout << "val:" << sval << ",val2:" << sval2 << endl;
	
	sval = 8;
	sval2 = sval & 0;
	cout << "val:" << sval << ",val2:" << sval2 << endl;
	
	sval = 8;
	sval2 = sval | 3;
	cout << "val:" << sval << ",val2:" << sval2 << endl;
	
	sval = 8;
	sval2 = sval | 3;
	cout << "val:" << sval << ",val2:" << sval2 << endl;
	
	// 1 0 0 0
	// 1 0 1 1
	// 0 0 1 1
	sval = 8;
	sval2 = sval ^ 11;
	cout << "val:" << sval << ",val2:" << sval2 << endl;
	

	
}
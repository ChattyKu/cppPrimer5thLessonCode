// sizeof 计算类型的长度  所占字节数
// 逗号

#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

struct data
{
	string name;
	int d;
	int d2;
};

int main()
{
	char c;
	cout << "char:" << sizeof(c) << endl;
	
	
	cout << "int:" << sizeof(int) << endl;
	
	int a = 14 , &b = a;
	
	cout << "int &:" << sizeof(b) << endl;
	
	int *pi = &a;
	cout << "int *:" << sizeof(pi) << endl;
	string * pstr = 0;
	cout << "string *:" << sizeof(pstr) << endl;
	
	int iarr[10] ;
	cout << "int arr:" << sizeof(iarr) << endl;
}
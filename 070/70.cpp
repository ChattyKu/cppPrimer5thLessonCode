// 重载与作用域
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

namespace primer70
{
	
}

string read()
{
	return "in main file";
}

void print(const string &)
{
	

}

void print(double d){};

void fooBar(int ival)
{
	bool read = false;
	// string s = read();
}

class A
{
	
};


int main()
{
	string s = read();
	return 0;
}
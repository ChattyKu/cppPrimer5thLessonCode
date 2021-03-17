// try  捕获异常 throw  抛出一个异常

#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::runtime_error;

int main()
{
	try
	{
		throw runtime_error("have a exception!");
		int a = 0;
		cout << a << endl;
	}
	catch(runtime_error err)
	{
		cout << err.what() << endl;
	}
	// 90%   10%
	
}
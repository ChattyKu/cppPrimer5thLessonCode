// 作用域  
#include <iostream>


int reused = 42;
int main()
{
	int sum = 0;
	for ( int val = 1; val <=10; ++val)
	{	
		sum += val;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	
	int unique = 0;
	std::cout << reused << " " << unique << std::endl;
	double reused = 3.14;
	std::cout << reused << " " << unique << std::endl;
	
	
	std::cout << ::reused << " " << unique << std::endl;
	
	
}
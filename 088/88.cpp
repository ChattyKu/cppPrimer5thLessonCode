
#include <sstream>
#include <iostream>

int main()
{
	int i = 10;
	while(--i) {
		std::string fileName = "test.txt";
		fileName += char(int('0') + i);
		// fileName.append(std::string(char(int('0') + i)));
		std::ostringstream oss;
		std::istringstream iss("this is string stream 1234");
		std::stringstream ss;
		
		oss << "first line\n";
		oss << "this is string\n";
		oss << i << "\n";
		std::cout << oss.str() << std::endl;
		
		iss >> fileName;
		std::cout << fileName << std::endl;
		iss >> fileName;
		std::cout << fileName << std::endl;
		iss >> fileName;
		std::cout << fileName << std::endl;
		iss >> fileName;
		std::cout << fileName << std::endl;
		int val;
		iss >> val;
		std::cout << val << std::endl;
		
	}
	
}
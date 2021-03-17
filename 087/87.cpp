#include <fstream>
#include <iostream>


int main()
{
	std::ofstream ofs("test.txt", std::ofstream::app);
	std::cout << "this is string\n";
	ofs << "first line\n";
	ofs << "this is string\n";
	ofs.close();
	int i = 10;
	while(--i) {
		std::string fileName = "test.txt";
		fileName += char(int('0') + i);
		// fileName.append(std::string(char(int('0') + i)));
		std::ofstream ofs(fileName, std::ofstream::app);
		ofs << "first line\n";
		ofs << "this is string\n";
	}
	return 0;
}
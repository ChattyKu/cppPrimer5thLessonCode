#include <iostream> // 可见域的操作
#include <fstream> // 对文件进行的操作
#include <sstream> // 对内存的一种操作

int main() 
{
	std::cout << "this is string!" << std::endl; // 换行刷新
	std::cout << "this is string!\n" << std::flush; // 直接刷新
	std::cout << "this is string!" << std::ends; // 输出一个空字符
	int i = 0;
	std::cin >> i;
}
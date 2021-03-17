#include <iostream> // include包含关键字
					// iostream 输入输出的头文件
int main()	// 程序入口函数
{
	int sum = 0, value = 0;
	while (std::cin >> value)		// std 所有标准库所在的命名空间  :: 作用域运算符
	{
		sum += value; // 使用ctrl + z 来输入文件结束的符号。
	}
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
	
}
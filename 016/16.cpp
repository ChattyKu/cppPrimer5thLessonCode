// 复合类型--指针

#include <iostream>

int main()
{
	// 可以复制拷贝
	// 可以不初始化
	// 
	
	int ival = 24;
	int *pval;	// *号作为指针的类型符号
	pval = &ival; // & 取地址符号，不是引用符号
	
	std::cout << ival << std::endl;
	*pval = 42;
	std::cout << ival << std::endl;
	std::cout << *pval << std::endl;
	// 1. 指向一个对象 
	// 2. 指向对象所占空间的下一个位置
	// 3. 空
	// 4. 无效
	
	pval = 0;	// 将指针的地址值赋值为零
	*pval = 0;	// 将指针指向的值赋值为零
	
	return 0;
}

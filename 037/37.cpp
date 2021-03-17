// C语言和C++之间的一些过渡接口

#include <string>
#include <iostream>
#include <vector>
using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
	string s("Hello world!");
	
	s += ", new world.";
	
	cout << s << endl;
	
	const char * cStr = s.c_str();
	
	cout << cStr << endl;
	// 数组——下标访问       标准库容器--迭代器访问
	// 需要我们来进行管理   不许我们来进行管理  （内存管理）
	// 数组是定长的         容器可以伸缩大小
	
	// 数组没有办法进行整体的赋值
	
	int int_arr[] = {0,1,2,3,4,5,6,7};
	// 使用数组的从begin开始到end结束的元素来初始化vector
	vector<int> ivec(begin(int_arr )+ 1, end(int_arr) - 1); 
	for(auto it = ivec.begin(); it != ivec.end(); ++it)
	{
		cout << *it << endl;
	}
	
}
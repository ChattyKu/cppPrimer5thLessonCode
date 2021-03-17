#include <iostream>
#include <vector>
#include <string>
#include <list>

using std::cout;
using std::endl;
using std::string;
using std::vector;
// 插入迭代器
// 适配器：转换操作方式
// 1. 头部插入
// 2. 尾部插入
// 3. 任意位置插入

// 流迭代器
// 反向迭代器
// 移动迭代器

void printVec(const std::vector<std::string> &v)
{
	for (auto obj : v) {
		std::cout << obj << " ";
	}
	std::cout << std::endl;
}

void printVec(const std::list<std::string> &v)
{
	for (auto obj : v) {
		std::cout << obj << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<std::string> sVec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	std::list<std::string> sLst;
	copy(sVec.rbegin(), sVec.rend(), back_inserter(sLst));
	printVec(sLst);
	
	sLst.clear(); // 清理所有容器元素
	copy(sVec.rbegin(), sVec.rend(), front_inserter(sLst));
	printVec(sLst);
	
	sLst.clear(); // 清理所有容器元素
	copy(sVec.begin(), sVec.end(), inserter(sLst, sLst.end()));
	printVec(sLst);
	// *it = val; // |1|2|3|4|
	// it = c.insert(it, val); // |1|5|2|3|4|
	//                               ↑
	// ++it; // |1|5|2|3|4|
	//               ↑
}
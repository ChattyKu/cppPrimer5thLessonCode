#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
// 反向迭代器
// 迭代器
//   ↓begin()                    ↓end()   [ )
// 0|-|-|-|-|-|-|-|-|-|-|-|-|-|-|0
// ↓rend()                     ↓rbegin()
// 0|-|-|-|-|-|-|-|-|-|-|-|-|-|-|0
// 反向迭代器 ，必须容器的迭代器自身支持自增（++）和自减（--）
// forward_list 没有反向迭代器    流，没有反向迭代器
using std::vector;
using std::cout;
using std::endl;
int main()
{
	vector<int> iVec {1,2,3,4,5,6,7,8,9,1,2,3,4,5};
	for (auto it = iVec.rbegin(); it != iVec.rend(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	std::sort(iVec.begin(), iVec.end());
	for (auto it = iVec.rbegin(); it != iVec.rend(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	std::sort(iVec.rbegin(), iVec.rend());
	for (auto it = iVec.rbegin(); it != iVec.rend(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	std::string line = "FIRST,MIDDLE,LAST";
	auto comma = find(line.cbegin(), line.cend(), ',');
	cout << std::string(line.cbegin(), comma) << endl;
	
	auto rcomma = find(line.crbegin(), line.crend(), ',');
	cout << std::string(line.crbegin(), rcomma) << endl;
	cout << std::string(rcomma.base(), line.cend()) << endl;
	// ←↑↓→
	// ↓→→→→→→→→→↓             ↓←←←←←←←↓   反向迭代器器查找的顺序
	// F I R S T , M I D D L E , L A S T 
	//                           ↑→→→→→→↑     取base后输出的顺序   
	
	
}
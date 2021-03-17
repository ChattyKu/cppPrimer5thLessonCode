#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>

int main()
{

	std::vector<int> iVec = {1,2,3,4,5,6,7,8,9,10};  // 加和=55
	
	auto res = std::find(iVec.cbegin(), iVec.cend(), 8); // ==
	auto res1 = std::accumulate(iVec.cbegin(), iVec.cend(), 5); // 起始值
	auto res2 = std::count(iVec.cbegin(), iVec.cend(), 5); // 容器中5有几个
	
	std::cout << "res1:" << res1 << ",res2:" << res2 << std::endl;
	
	std::fill(iVec.begin(), iVec.end(), 99);
	
	std::ostream_iterator<int> outline(std::cout, " ");
	std::copy(iVec.begin(), iVec.end(), outline);
	std::cout << std::endl;
	
	std::fill(iVec.begin(), iVec.begin() + iVec.size() / 2, 55);
	std::copy(iVec.cbegin(), iVec.cend(), outline);
	std::cout << std::endl;
	
	// 异常发生点，  算法本身不会校验容器的有效性
	std::vector<int> iVec2;
	//std::fill_n(iVec2.begin(), 10, 0); // 把容器的前10个元素填充为0
	std::fill_n(back_inserter(iVec2), 10, 0);
	std::copy(iVec2.cbegin(), iVec2.cend(), outline);
	std::cout << std::endl;
	
	std::copy(iVec2.cbegin(), iVec2.cend(), back_inserter(iVec));
	std::copy(iVec.cbegin(), iVec.cend(), outline);
	
	
	
}

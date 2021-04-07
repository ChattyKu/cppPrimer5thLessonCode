#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>

class mapKeyTest
{
public:
	mapKeyTest(){};
	// 1. 保证小于的两个值不能反向成立  A < B   , 不能 B < A 也成立
	// 2. A < B < C 则  A < C 成立
	// 3. A == B == C  则  A == C 成立
	bool operator <(const mapKeyTest &rls) const
	{
		return this->m_sTestName < rls.m_sTestName;
	}
private:
	std::string m_sTestName;
};

int main()
{
	// std::map<key,value> mapV;
	// key
	// 1. 容器的元素具有排序的能力
	//    对于排序，我们需要用到比较符号。  <    > 
	std::map<mapKeyTest, size_t> testMap;
	mapKeyTest test1;
	testMap[test1] = 2;
	
}
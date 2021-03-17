#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

class testC
{
public:
	testC(int i) : m_iVal(i){}
	bool operator==(const testC &rh) {return this->m_iVal == rh.m_iVal;}
private:
	int m_iVal;
};

int main ()
{
	int value = 7;
	std::vector<testC> iVec = {1,2,3,4,5,6,7,8,8,9,10};
	
	auto result = std::find(iVec.begin(), iVec.end(), value);
	std::cout << "The value " << value << (result == iVec.end() ?
				" is not present." : "is present.") << std::endl;
}
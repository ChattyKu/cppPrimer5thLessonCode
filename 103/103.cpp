#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>

void printVec(const std::vector<std::string> &v)
{
	for (auto obj : v) {
		std::cout << obj << " ";
	}
	std::cout << std::endl;
}

void biggies ( std::vector<std::string> &words, std::vector<std::string>::size_type sz, std::ostream &os = std::cout, char c = ' ')
{
	for_each(words.begin(), words.end(),
			[&, c](const std::string &s) {os << s << c;});
	os << std::endl;
	for_each(words.begin(), words.end(),
			[=, &os](const std::string &s) {os << s << c;});
}

int main() 
{
	int v1 = 22;
	
	auto f = [v1] {return v1;};  // 值捕获
	
	std::cout << "v1:" << f() << std::endl;
	
	auto fRef = [&v1] {return v1;}; // 引用捕获
	v1 = 0;
	std::cout << "v1 ref catch:" << fRef() << std::endl;
	
	int sz = 3;
	std::vector<std::string> sVec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	auto w = find_if(sVec.begin(), sVec.end(), [=](const std::string &s) {return s.size() >= sz;});  // 隐式捕获   值捕获
	
	std::cout << *w << std::endl;
	sz = 4;
	w = find_if(sVec.begin(), sVec.end(), [&](const std::string &s) {return s.size() >= sz;});  // 隐式捕获   引用捕获
	std::cout << *w << std::endl;
	
	
	biggies(sVec, 4);
	int value = 4;
	std::cout  << std::endl << "before lambda:" << value << std::endl;
	auto fRef2 = [&value] () -> int {++value; std::cout << "in lambda:" << value<< std::endl;return value;};
	
	std::cout << fRef2() << "," << fRef2() << "," << fRef2() << ","<< value << std::endl; // ??? 为什么v1的值不是1
	
	std::string ss = "test ss";
	auto fSS = [&]() {ss="ss test";std::cout << "in lambda:"<<ss<< std::endl;return ss;};
	
	std::cout << fSS() << std::endl << "after lambda:"<< ss << std::endl;
	
	
}
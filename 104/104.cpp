#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
#include <functional>
#include <sstream>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::bind;
using std::placeholders::_1;
using std::ostream;

using namespace std::placeholders;

bool check_size(const string &s, string ::size_type sz)
{
	return s.size() >= sz;
}

ostream &print(ostream &os, const string &s, char c)
{
	return os << s << c;
}

int main()
{
	std::vector<std::string> sVec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	int sz = 4;
	auto findRes2 = find_if(sVec.begin(), sVec.end(), [sz](const std::string &s1){ return s1.size() >= sz;});
	
	cout << *findRes2 << endl;
	
	// findRes2 = find_if(sVec.begin(), sVec.end(), check_size);
	auto checkFunc = bind(check_size, std::placeholders::_1, sz); // /*占位符*/
	// bind(check_size, a, b, std::placeholders::_1, sz, std::placeholders::_2); // /*占位符*/
	
	findRes2 = find_if(sVec.begin(), sVec.end(), checkFunc);
	cout << *findRes2 << endl;
	std::ostringstream os;
	char c = ' ';
	
	for_each(sVec.begin(), sVec.end(), [&os, c](const string &s) {os << s << c;});
	cout << os.str() << endl;
	
	for_each(sVec.begin(), sVec.end(), bind(print, ref(os), _1, ' '));
	

	

}
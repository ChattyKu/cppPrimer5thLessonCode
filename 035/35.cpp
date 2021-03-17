// 数组与指针

#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main()
{
	string nums[] = {"one", "two", "three", "four", "five", "six", "seven"};
	string *p = &nums[0];
	
	cout << "arr name:" << nums << "\nstring point:" << p << endl;
	
	cout << *(++p) << endl;
	cout << *(++p) << endl;
	cout << *(p + 2) << endl;
	
	cout << p - nums << endl;
	auto it = std::begin(nums);
	auto end = std::end(nums);
	cout << *it << endl;
	cout << *(--end) << endl;
}
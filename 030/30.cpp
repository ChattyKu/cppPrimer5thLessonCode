// vector


#include <vector>
#include <string>

using std::vecotr;
using std::string;
// string 的元素是 char 


// vector 的元素是 任意的类型
// 每个vector只能容纳一种类型的对象

struct Sales_data
{
	
};

int main()
{
	vector<int> ivec; 	// 以int为元素的vector
	vector<string> strVect; // 以string为元素的vector
	vector<Sales_data> salesVec; // 以sales_data 为元素的vector
	
	
	ivec = {1, 2, 3};
	vector<int> ivec2(10, -1); 
	vector<string> strVec(10, "hi!");
	
}
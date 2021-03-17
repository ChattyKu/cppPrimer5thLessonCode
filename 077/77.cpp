// public private
// 友元
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;


struct Sales_item;

class Sales_data
{
	friend Sales_item;// 破坏封装性
public: // struct关键字默认访问权限
	Sales_data() = default;
	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s), units_sold(n), revenue(p * n){}
	Sales_data(const std::string &s):bookNo(s){}
	Sales_data(std::istream&);
	std::string isbn() const { return bookNo;}
	Sales_data &combine(const Sales_data&);
private: // class关键字默认访问权限
	double avg_price() const
		{ return units_sold ? revenue / units_sold : 0;}
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

struct Sales_item
{
	void print(Sales_data d)
	{
		cout << d.bookNo << endl;
	}
};

// friend 你的家门钥匙，  

// 构建对象（一系列的相关对象）的一个类型

int main()
{
	Sales_data data("testBookNo", 1, 2.0);
	
	Sales_item item;
	item.print(data);
	return 0;
}
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;


struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	
	explicit Sales_data(){};
	explicit Sales_data(const std::string& bNo):bookNo(bNo){};
	std::string isbn() const {return this->bookNo;}
	Sales_data& combine(const Sales_data&){return *this;};
	double avg_price() const {};
};

int main()
{
	Sales_data item;
	string nullBook = "9-999-999-9";
	item.combine(nullBook);
	item.combine(Sales_data("9-999-999-9"));
	item.combine(Sales_data(string("9-999-999-9")));
	// item.combine("9-999-999-9");   错误：违反了只允许一步转换的原则
	return 0;
}
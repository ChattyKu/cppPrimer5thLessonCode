// 类   面向对象的基础
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// Sales_data
// +  =  +=  <<  >>

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	
	std::string isbn() const {return this->bookNo;}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
}

Sales_data& Sales_data::combine(const Sales_data&rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhe.revenue;
	return *this;
}

double Sales_data::avg_price() const
{
	if(units_sold)
	{
		return revenue / units_sold;
	}
	else
	{
		return 0;
	}
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);




int main()
{
	Sales_data total;
	if(read(cin, total))
	{
		Sales_data trans;
		while(read(cin, trans))
		{
			if(total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "No data?!" << endl;
	}
	return 0;
}
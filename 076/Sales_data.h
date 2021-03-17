

#ifndef __SALES_DATA_H__
#define __SALES_DATA_H__
struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	
	Sales_data(){};
	Sales_data(const std::string& bNo):bookNo(bNo){};
	std::string isbn() const {return this->bookNo;}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
};

Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

#endif // __SALES_DATA_H__
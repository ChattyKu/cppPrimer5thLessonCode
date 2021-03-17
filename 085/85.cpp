// 类的静态成员
#include <iostream>
#include <string>

using std::string;

class Account
{
public:
	static void Rate(double ra) {interestRate = ra;}
private:
	std::string owner;
	double amount;
	static double interestRate;
};

double Account::interestRate = 0.035;

int main()
{
	Account c;// Account是类型 , c 就是对象
	Account::Rate(0.03);
	c.Rate(0.03);
}
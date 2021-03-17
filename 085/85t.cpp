// 类的静态成员
// 静态成员直接与类本身关联
#include <iostream>
#include <string>

class Account 
{
public:
	Account(){}
	static void rate(double r) {interestRate = r;}
private:
	std::string owner; // 户主
	double amount; // 存款额
	static double interestRate; //利率
};


int main()
{
	Account a;
	Account b;
	
}
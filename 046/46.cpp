// 递增和递减
#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> ivec = {0,1,2,3,4,5,6,7,8,9};
	for(int i = 0; i < ivec.size(); ++i /*++i*/ )
	{
		cout << ivec[i] << endl;
	}
	
	cout << endl;
	
	for(int i = ivec.size() - 1; i != -1; /*--i*/ i--)
	{
		cout << ivec[i] << endl;
	}
	
	int a = 5;
	int b = 2;
	
	int c = 0;
	int d = 0; 
	
	c =  a++ + b;  
	
	cout << "a:" << a << ",b:" << b << ",c:" << c << ",d:" << d << endl;
	
	a = 5;
	d =  ++a + b;
	cout << "a:" << a << ",b:" << b << ",c:" << c << ",d:" << d << endl;
	
	
	//++i; // 将计算叠加的过程完成后再参与其他计算
	//--i;
	
	//i++; // 将原值保留参加当前的运算，然后再将叠加的结果返回
	//i--;
	auto it = ivec.begin();
	while( it != ivec.end())
	{
		cout << *it++ << endl;
	}
	
}
// 逻辑与  逻辑或

// <  >   <=   >=  
// true false
//  && (逻辑与)  || （逻辑或）

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	// true && true = true;
	// true && false = false;
	// false && true = false;
	// false && false = false;
	// 
	//  true || true  = true;
	//  true || false = true;
	// false || true  = true;
	// false || false = false;
	
	// 短路求值
	// 逻辑与中，左侧值为false，则不继续求解右则值，直接返回false
	// 逻辑或中，左侧之为true， 则不继续求解右侧值，直接返回true
	
	int a = 1;
	int b = 2;
	if(a > b || ++a)
	{
		
	}
	cout << "a: " << a << endl;
}
// 逻辑非    !
// 关系运算  
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main()
{
	// !  (  )  {  }
	// ！  （  ）  ｛  ｝
	string str = "hello world";			
	if (!str.empty()) // 不加感叹号 如果字符串为空   加感叹号后则是  非空（不为空时）
	{
		cout << "string not empty" << endl;
	}
	else
	{
		cout << "string is empty" << endl;
	}
	
	// > >= < <= == !=
	// 按照位顺序比较字符的ascii值 区分大小写
	// 然后比较长度
	// test < test1   atest < btest
	// == 
	int s = 3;
	if( s ==  5 ) // false;
	if( s = 5 )   // true;
	{
		
	}
	
}
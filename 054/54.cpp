// switch

#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;


int main()
{
	// 统计一个字符串中元音字母的个数分别是多少
	unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned int other = 0;
	char ch;
	while(cin >> ch)
	{
		switch(ch)
		{
			case 'A':
			case 'a':  // 整型   常量   表达式
				++aCnt;
				break;
			case 'E':
			case 'e':
				++eCnt;
				break;
			case 'I':
			case 'i':
				++iCnt;
				break;
			case 'O':
			case 'o':
				++oCnt;
				break;
			case 'U':
			case 'u':
				++uCnt;
				break;
			default :
				++other;
				break;
		}
	}
	cout << "Number of vowel a : \t" << aCnt << '\n'
		 << "Number of vowel e : \t" << eCnt << '\n'
		 << "Number of vowel i : \t" << iCnt << '\n'
		 << "Number of vowel o : \t" << oCnt << '\n'
		 << "Number of vowel u : \t" << uCnt << endl;
}
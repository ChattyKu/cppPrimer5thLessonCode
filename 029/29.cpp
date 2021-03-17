// string

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()

{
	string s1;
	string s2 = s1;
	string s3 = "hiya";
	string s4(10, 'c');
	
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	
	//cin >> s1 >> s2;
	
	//cout << s1 << endl;
	//cout << s2 << endl;
	
	std::getline(cin, s1);

	cout << "getline:" << s1 << endl;
	
	s1.empty(); // 空返回true
	s1 == s2; 	// 相等返回true
	s1 = s1 + s3;
	cout << s1 << endl;
	s1 += s3;
	cout << s1 << endl;
	
	
}
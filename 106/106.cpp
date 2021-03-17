#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <numeric>
#include <fstream>
#include "../006/Sales_item.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::list;
using std::cin;
using std::istream_iterator;
using std::ostream_iterator;
using std::ifstream;


void printVec(const std::vector<std::string> &v)
{
	for (auto obj : v) {
		std::cout << obj << " ";
	}
	std::cout << std::endl;
}

void printVec(const std::list<std::string> &v)
{
	for (auto obj : v) {
		std::cout << obj << " ";
	}
	std::cout << std::endl;
}
void printVec(const std::vector<int> &v)
{
	for (auto obj : v) {
		std::cout << obj << " ";
	}
	std::cout << std::endl;
}

int main()
{
	istream_iterator<int> int_iter(cin);
	istream_iterator<int> int_eof; //尾后迭代器
	
	cout << accumulate(int_iter, int_eof, 0) << endl;
	// cin >> string;iVec.push_back(string);
	// vector<int> iVec;
	// while (int_iter != int_eof) {
	// 	//iVec.push_back(*int_iter);
	// 	//++int_iter;
	// 	iVec.push_back(*int_iter++);
	// }
	// printVec(iVec);
	
	ifstream ifs("sales.txt");
	istream_iterator<Sales_item> item_iter(ifs), item_eof;
	ostream_iterator<Sales_item> out_iter(cout, "\n");
	Sales_item sum = * item_iter++;
	while (item_iter != item_eof) {
		if (item_iter->same_isbn(sum.ISBN())) {
			sum += *item_iter++;
		} else {
			out_iter = sum;
			sum = *item_iter++;
		}
	}
	out_iter = sum;
	
	
}
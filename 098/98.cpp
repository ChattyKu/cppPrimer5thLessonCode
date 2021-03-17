#include <iostream>
#include <string>
#include <deque>
#include <iterator>
#include <vector>
#include <queue>
#include <functional>

using std::cout;
using std::endl;
using std::string;
using std::deque;
using std::vector;
using std::ostream_iterator;
using std::priority_queue;
using std::less;
using std::greater;

// stack   栈   deque  vector  push   pop  top
// queue   队列   priority_queue

int main()
{
	ostream_iterator<int> outline(cout," ");

	int ia[] = {0,1,2,3,4,5};
	deque<int> id(ia,ia+6);
	vector<int> ivec(6);
	copy(id.begin(), id.end(), ivec.begin());//0 1 2 3 4 5
	copy(id.begin(), id.end(), outline);//0 1 2 3 4 5
	cout<<endl;
	
	priority_queue<int> pq1;
	
	priority_queue<int, vector<int>, less<int> > pq2;  // 大优先
	
	priority_queue<int, vector<int>, greater<int> > pq3; // 小优先
	
	pq1.push(2);
	pq1.push(3);
	pq1.push(4);
	pq1.push(8);
	pq1.push(7);
	
	while (!pq1.empty()) {
		cout << pq1.top() << " ";
		pq1.pop();
	}
	cout << endl;
	

	
	pq2.push(2);
	pq2.push(3);
	pq2.push(4);
	pq2.push(8);
	pq2.push(7);
	
	while (!pq2.empty()) {
		cout << pq2.top() << " ";
		pq2.pop();
	}
	cout << endl;
	
	pq3.push(2);
	pq3.push(3);
	pq3.push(4);
	pq3.push(8);
	pq3.push(7);
	
	while (!pq3.empty()) {
		cout << pq3.top() << " ";
		pq3.pop();
	}
	cout << endl;
	
	
}
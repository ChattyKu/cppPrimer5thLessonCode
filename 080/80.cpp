#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

class First;
class Second;

class Screen{};

class Link_screen 
{
	Link_screen *next;
	Link_screen *prev;
	Screen window;
	int size;
};

int main()
{
	First *first;
	//Second &second;
	//if (first == second){
	//	cout << "same" << endl;
	//} else {
	//	cout << "diff" << endl;
	//}
	return 0;
}


struct Second 
{
	int memi;
	int getMem(First &first) {return memi;};
};

struct First
{
	friend class Second; //类的友元
	friend int Second::getMem(First &first);
	int memi;
	int getMem() {return memi;};
};



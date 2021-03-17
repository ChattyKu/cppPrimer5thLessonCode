// 
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// 成员方法  成员变量
class Screen
{
public:
	// typedef std::string::size_type pos;
	using pos = std::string::size_type;
public:
	Screen() = default;
	Screen(pos ht, pos wd, char c) : height(ht), width(wd),contents(ht * wd, c){}
	char get() const {return contents[cursor];}
	inline char get(pos ht, pos wd) const;
	Screen &move(pos r, pos c);
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	mutable int m_nCallGetCount = 0;
};

inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const
{
	++m_nCallGetCount;
	pos row = r * width;
	return contents[row + c];
}

class Window_mgr
{
private:
	std::vector<Screen> screens{Screen(24, 80, ' ')};
};


int main()
{
	Screen::pos p = 99;
	int a = 99;
	
}


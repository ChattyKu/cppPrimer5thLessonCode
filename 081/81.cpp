#include <string>
#include <vector>
#include <iostream>
#include <typeinfo>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

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
	Screen &set(char);
	Screen &set(pos, pos, char);
public:
	Screen &display(std::ostream &os)
		{do_display(os); return *this;}
	const Screen &display(std::ostream &os) const
		{do_display(os); return *this;}
private:
	void do_display(std::ostream &os) const {os << contents;}
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

inline Screen & Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}


typedef float Money; 

class Account
{
public:
	Account(): bal(0.0f){}
	Money balance(){ return bal;}
private:
	typedef double Money;
	Money bal;
};

int main()
{
	Screen::pos ht = 24, wd = 80;
	Screen src(ht, wd, ' ');
	Screen *p = &src;
	// Screen *pp, pp1;
	
	char c = src.get();
	c = p->get();
	
	Account ac;
	cout << typeid(ac.balance()).name() << endl;
	// HRESULT long long
	// HANDLE long int
	
	return 0;
}
#include <iostream>
#include <string>

using std::string;
// ---聚合类---
// 所有成员都是public
// 没有定义构造函数
// 没有类内初始值
// 没有基类，没有virtual函数  -- 与类的内存分布

struct Data
{
	int ival;
	string s;
};
// 破坏封装性
// 将初始化过程交给了用户（代码的调用者），不安全
// 在成员发生变化后，需要所有的地方都变化。


// 字面值常量 constexpr  类

// 数据成员必须是字面值类型
// 必须含有至少一个constexpr构造函数
// 如果含有类内初始值，表达式必须是常量
// 析构函数默认

class Debug
{
public:
	constexpr Debug(bool b = true) : hw(b), io(b), other(b) {}
	
	constexpr bool any() {return hw || io || other;}
private:
	bool hw;
	bool io;
	bool other;
};

int func(int n)
{return n * 2; }

constexpr int func_const(int n)
{return n * 2;}

int main()
{
	// 在聚合类初始化时，括号中的变量顺序必须是成员变量的声明顺序
	Data vall = {0, "ChattyKu"};
	int ival = 10;
	int a[func_const(3)];
	int b[func_const(ival)];
	
}

// = 赋值
// 将等号右侧的值赋给等号左侧
#include <vector>

int main()
{
	const int ci = 10;
	ci = 11;
	int ival = 33;
	
	std::vector<int> ivec;
	ivec = {0,1,2,3,4,5,6,7,8,9};
	//short svale = 65535 + 1; // 超出范围
	ivec[5] = ci + ivale;
	
	// 复合赋值运算符
	// += -= *= /= %=
	// <<= >>= &= ^= |=
	
	a += b; 
	a = a + b;
	
	a -= b;
	a = a - b;
}

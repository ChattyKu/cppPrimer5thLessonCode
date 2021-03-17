// decltype  declared type 
// 从一个表达式中推断出类型

int f()
{
	return 3;
	
}

int main()
{
	decltype(f()) val = 3;
	{
		const int ci = 0, &cj = ci;
		decltype(ci) x = 0;
		decltype(cj) y = x;
		//decltype(cj) z;
		
		//x = 12;
	}
	
	{
		int i = 42, *p = &i, &r = i;
		decltype(r + 0) b;
		decltype(*p) c;
		
		// 地址1（对象）           地址2
		// 内容1（指针：地址2）    内容2
	}
	
}
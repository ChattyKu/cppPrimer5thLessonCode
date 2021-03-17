// const 层次
// 指针本身也是一个对象
// 无法改变的指针，而不是内容

int main()
{
	int ival = 24;
	const int *pival = &ival; // 限制了被指向的对象，但是没有限制指针本身   底层
	
	int ival2 = 26;
	pival = &ival2;
	
	//*pival = 56;
	
	int * const pival2 = &ival; // 限制了指针，但并没有限制指向的对象（变量）  顶层
	//pival2 = &ival2;
	
	*pival2 = 56;
	
	
	//  地址 （指针）顶层
	//  内容 （指针指向的对象）底层
	
	int const * pival3 = &ival;
	pival3 = &ival2;
	//*pival3 = 56;
	
	// 就近左原则
	
	const int * const pival4 = &ival; // 双层的const
	pival4 = &ival2;
	*pival4 = 56;
	
}
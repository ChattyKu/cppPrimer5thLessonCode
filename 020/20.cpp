// const 指针


int main()
{
	const int *pival = 0; 
	
	int ival = 4;
	pival = &ival;
	
	const int cival = 8;
	
	pival = &cival;
	
	//*pival = 8;
	
	
	
	return 0;
}
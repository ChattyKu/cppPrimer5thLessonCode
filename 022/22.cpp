// const constexpr

constexpr int funSum(int max)
{
	int res = 0;
	for(int i = 0; i < max; ++i)
	{
		res += i;
	}
	return res;
}


int main()
{
	const int ival = funSum(5);
	const int ival0 = funSum(4);
	
	
	constexpr int ival2 = 56;
	constexpr int ival3 = funSum(3);
	
	
	const int * const ival00 = &ival;
	
	constexpr int * pival = ival00;
	pival = &ival0;
	
	pival = &ival2;
	
	*pival = ival0;
	*pival = ival3;
}
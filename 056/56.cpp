// 跳转语句  break;  continue;  goto;

#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;


int main()
{

	
	for(int i = 0; i < 10; ++i)
	{

		for(int j = 0; j < 10; ++j)
		{
			if( j == 5 )
			{
				// break;  // 跳出最近的while、do...while、for、switch
				// continue;
				goto end;
			}
			
			cout << "i:" << i << ",j:" << j << endl;
end:		
;
		}
	}
}
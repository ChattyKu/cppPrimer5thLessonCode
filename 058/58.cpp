// 标准异常

#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <exception>
// bad_alloc  new头文件
// bad_cast type_info头文件
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::runtime_error;

int main()
{
	exception   //最常见的问题
	runtime_error // 只有在运行时才能检测出的问题
	rang_error // 值域范围超出了有意义的范围
	overflow_error // 计算上溢出
	underflow_error // 计算下溢出
	logic_error // 逻辑错误
	domain_error // 参数对应的结果值不存在
	invalid_argument // 无效参数
	length_error // 视图穿件一个超出该类型最大长度的对象
	out_of_range // 超出有效值范围的值  
}

// 类型成员

#include <vector>
#include <string>

int main()
{
    std::vector<std::string> strVec;
    std::vector<std::string>::size_type len = strVec.size();  // 表示长度
    std::vector<std::string>::iterator it = strVec.begin();
    auto ita = strVec.begin();
    std::vector<std::string>::const_iterator it  = strVec.begin();
    std::vector<std::string>::difference_type diff = strVec.end() - strVec.begin();
    
    // begin() 和  end()
    // rbegin() 和 rend()
    //   x(rend),1(begin),2,3,4,5,6(rbegin),x(end)
    auto rit = strVec.rbegin();
    auto ritEnd = strVec.rend();
    
    int * pInt;
    const int * pInt1; // 值不可变   const_interator
    int * const pInt2; // 指针不可变
    int const * const pInt3; // 值和指针都不可变
    
    
    
}
//容器的大致分类
//1. 顺序容器
//2. 关联容器
//3. 无序容器。

#include <vector>
#include <string>
#include <deque>

using std::string;
using std::vector;
using std::deque;

int main()
{
    vector<int> intVec;
    vector<string> strVec;
    vector<vector<string> > strVecVec;
    //insert();
    //earse();
    // 迭代器
    vector<int>::iterator it = intVec.begin();
    vector<int>::iterator itEnd = intVec.end();
    // [begin, end)
    // 1(begin),2,3,4,5,6,x(end)  实际元素只有6个。
    for (auto it = intVec.begin(); it != intVec.end(); ++it) {
        
    }
    
    auto strEnd = strVec.end();
    strEnd->find("123");
    
    
}
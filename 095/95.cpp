#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <array>

using std::cout;
using std::endl;
using std::string;
using std::list;
using std::array;
// 对容器元素的访问
// front  back  []   at
// 对容器元素的删除
// pop_front pop_back erase  clear
int main()
{
    std::list<string> svec;
    // cout << svec[0];
    for (auto it = svec.begin(); it != svec.end(); ++it) {
        cout << *it << endl;
    }
    
    svec.push_back("123");
    try {
        cout << svec.back() << endl;
        svec.front() = "1234";
        // cout << svec.at(0);
    } catch (std::out_of_range) {
        cout << "下标越界" << endl;
    } catch (...) {
        cout << "未知异常" << endl;
    }
    while(!svec.empty()) {
        cout << svec.front();
        svec.pop_front();
    }
    cout << "\nsize:" << svec.size() << endl;
    
}
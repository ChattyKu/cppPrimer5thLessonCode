#include <vector>
#include <list>
#include <iostream>

using std::cout;
using std::endl;
using std::list;
using std::vector;


// 迭代器的失效问题。

//  名称             增加                       删除
// vector   数组    都可能失效                被删除位置后都失效
// list     链表    除操作节点其他不受影响    尾后迭代器和被操作元素外都不收影响
// deque    队列    首尾操作 首尾元素外不受影响    首尾操作 首尾元素外不受影响 
int main()
{
    list<int> ilist(10, 42); // 定义了10个元素，每个元素为42
    cout << "first get ilist size:" << ilist.size() << endl;
    ilist.resize(15);
    cout << "second get ilist size:" << ilist.size() << endl;
    
}
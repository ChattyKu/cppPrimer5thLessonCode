#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;

// 容器的比较
// 前提： 相同的容器，相同的元素类型，元素类型必须支持< 操作
// 规则类似string的比较。
// 元素数量和元素本身都一一相等，则相等。
// 元素一一相等，但数量不同， 则长的大于短的。
// 元素不相等，则取决于第一个不相同的元素。


// 顺序容器的增加元素的操作。

// vector 和string  曾加，除在尾部操作外，其他位置都需要移动元素。
// - - - - - - - - - -
// - - - - - | - - - - -
// deque 收尾增加外，需要移动元素

// 都有可能需要重新申请空间，所以迭代器在容器元素变化后，可能失效。

// ----
// -----------

int main()
{
    vector<int> vecInt{1,2,3,4,5,6};

    cout << "alloc 1 len:" << vecInt.capacity() << endl;
    vecInt.push_back(7);
    cout << "alloc 2 len:" << vecInt.capacity() << endl;
    vecInt.insert(vecInt.begin(), 0);
    cout << "alloc 3 len:" << vecInt.capacity() << endl;
    vecInt.insert(vecInt.begin() + 2, 9);

    vecInt.push_back(11);

    for (int i = 0; i< 100; ++i) {
        vecInt.push_back(i);
        cout << "alloc in loop len:" << vecInt.capacity() << ", i = " << i << endl;
    }

    cout << "alloc len:" << vecInt.capacity() << endl;

    for (auto it : vecInt) {
        cout << it << " , ";
    }
    cout << endl;

}
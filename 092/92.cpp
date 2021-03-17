#include <vector>
#include <string>
#include <deque>
#include <iostream>
#include <array>

void printVec(const std::vector<std::string> &vec)
{
    std::cout << "print in:" << std::endl;
    for (auto it : vec) {
        std::cout << it << std::endl;
    }
    
}

void printArr(const std::array<std::string, 10> &vec)
{
    std::cout << "print in:" << std::endl;
    for (auto it : vec) {
        std::cout << it << std::endl;
    }
    
}

int main()
{
    std::vector<std::string> vecStr1;  // 空容器
    std::vector<std::string> vecStr2(vecStr1);  // 复制参数容器的所有内容
    std::vector<std::string> vecStr3{"str1", "str2", "str3"};
    std::vector<std::string> vecStr4(vecStr3);
    std::vector<std::string> vecStr5(vecStr3.begin(), --vecStr3.end());
    std::vector<std::string> vecStr6(10, "hello!");  // 
    std::array<std::string, 10> arrStr1{"hello!"};
    printVec(vecStr1);
    printVec(vecStr2);
    printVec(vecStr3);
    printVec(vecStr4);
    printVec(vecStr5);
    printVec(vecStr6);
    printArr(arrStr1);
    // 1 - - - - - 
    // 2 = = = = =
    // swap   1改成2，2改成1  无论容器长度大小因素，操作均为线性。
    // swap 操作，不会影响迭代器。  但是赋值操作，会影响做操作对象的迭代器，
    //      可以认为，所有做操作对象相关的迭代器在赋值操作后都失效了
    vecStr1 = vecStr5;
    std::cout << "-------------------" << std::endl;
    vecStr6.swap(vecStr2);
    printVec(vecStr1);
    printVec(vecStr2);
    printVec(vecStr6);
    

    
}
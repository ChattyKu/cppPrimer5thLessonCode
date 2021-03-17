// 类型转换。

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

bool isLongPressedName(string name, string typed) {
    if (name.empty() || typed.empty() || name.at(0) != typed.at(0)) {  // 如果第一个字符不想等，则一定不对
        return false;
    }
    int bNamePos = 0;
    int eNamePos = 0;
    int bTypePos = 0;
    int eTypePos = 0;

    while (bNamePos != string::npos && bTypePos != eTypePos) {
        eNamePos = name.find_first_not_of(name.at(bNamePos), bNamePos);
        eTypePos = typed.find_first_not_of(typed.at(bTypePos), bTypePos);
        cout << "pos name:" << bNamePos << "|" << eNamePos << ",pos typed:" << bTypePos << "|" << eTypePos << endl;
        if (eTypePos - bTypePos < eNamePos - bNamePos) {
            return false;
        }
        bNamePos = eNamePos;
        bTypePos = eTypePos;
    }
    return true;
}

int main() {
    cout << isLongPressedName("saeed", "ssaaedd");
    bool b = 42;
    std::cout << "bool:" << b << std::endl;

    int i = b;
    std::cout << "int:" << i << std::endl;

    i = 3.14;
    std::cout << "int from double:" << i << std::endl;

    double pi = i;
    std::cout << "double from int:" << pi << std::endl;

    unsigned char c = -1;
    std::cout << "c from -1:" << int(c) << std::endl;

    signed char c2 = 256;
    std::cout << "c2 from 256:" << int(c2) << std::endl;

    std::string tmp;
    tmp.push_back('1');

    return 0;
}

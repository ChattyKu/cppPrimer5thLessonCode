#include <iostream>
#include <vector>
#include <string>
#include <list>

using std::vector;
using std::list;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    vector<string> svec;
    list<string> slist;
    
    auto itlist = slist.insert(slist.begin(), "Hello!");
    cout << "1:" << *itlist << endl;
    itlist = slist.insert(++slist.begin(), 2, " world!");
    cout << "2:" << *itlist << endl;
    
    auto itvec = svec.insert(svec.begin(), "Hello!");
    cout << "3:" << *itvec << endl;
    itvec = svec.insert(svec.begin() + 1, 2, " world!");
    cout << "4:" << *itvec << endl;
    itvec = svec.insert(svec.begin(), "SEP");
    cout << "5:" << *itvec << endl;
    itvec = svec.insert(svec.begin(),slist.begin(), slist.end());
    cout << "6:" << *itvec << endl;
    itvec = svec.insert(svec.begin(), {"testinit"});
    cout << "7:" << *itvec << endl;
    cout << "slist: ";
    
    svec.emplace(svec.begin(), "test emplace", 30);
    
    for (auto item : slist) {
        cout << item << ",";
    }
    cout << endl;
    cout << " svec: ";
    for (auto item : svec) {
        cout << item << ",";
    }
    cout << endl;
    
    
    
}
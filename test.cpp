//
// Created by lpz on 2024/7/24.
//
#include <stack>
#include "iostream"
using namespace std;
int
main(int argc, char *argv[]) {
    stack<int> s;
    s.push(1);
    s.push(2);
    std::cout<<s.size()<<endl;
    s.top() = NULL;
    cout<<s.size()<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;

   return 0;

}
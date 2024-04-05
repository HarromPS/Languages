#include<iostream>
#include<cstdio>
#include <functional>
using namespace std;
int fun1();
int fun2();
// int fun1();

int main(){
    
    // auto is used when no dataType is used to declare a variable
    // but the variable must be initialized else compile-time error
    auto x = 4 ;
    auto y = 1.23;
    auto ptr = &x;

    // typeid -> gives the dataType of the variable
    // i= integer
    cout<<typeid(x).name()<<endl;
    cout<<typeid(y).name()<<endl;
    cout<<typeid(ptr).name()<<endl;

    // auto &a =fun();
    // cout<<typeid(a).name()<<endl;
    decltype(fun1()) x1;
    decltype(fun2()) y1;
 
    cout << typeid(x1).name() << endl;
    cout << typeid(y1).name() << endl;

    return 0; 
}
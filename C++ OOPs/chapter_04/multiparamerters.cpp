#include <iostream>
#include <cstdio>
using namespace std;

// MULTIPARAMETERS IN C++

void display(int a, int b, int c)
{
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl<<endl;
}
int main()
{
    int a, b, c;
    display(10,20,30); 
                        // function are called with diffferent parameters
    display(1,2,3);  
                        // called again with different parameters
    display(2,4,8);     // task of the function remains the same as name of the function is same 
    return 0;
}
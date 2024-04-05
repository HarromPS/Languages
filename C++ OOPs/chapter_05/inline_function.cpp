#include <iostream>
#include <cstdio>
using namespace std;

// using inline function
//  It is used to save time o code & make it faster

// defining the inline function
// inline keyword, return type, name(parameters)

inline int mul(int a, int b)
{
    return (a * b);
}
int main()
{

    int x = 2;
    int y = 3;

    cout << "The multiplication through inline function is: ";
    cout<< mul(x, y) << endl;
    return 0;
}
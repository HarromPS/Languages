#include <iostream>
#include <cstdio>
using namespace std;

// ENUM - Enumeration
// to make program more more redable

int main()
{
    enum meal // enum is a datatype and can be used as a datatype
    {
        breakfast,
        lunch,
        dinner
    };

    meal m1 = breakfast; // can be used to assign program variables for different works
    meal m2 = lunch;
    meal m3 = dinner;
    cout << m1 << endl;
    cout << m2 << endl;
    cout << m3 << endl;

    cout << "\n"
         << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    // will print.x 0 1 2 ....

    return 0;
}
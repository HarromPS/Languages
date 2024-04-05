#include <iostream>
#include <cstdio>
using namespace std;

// INPUT AND OUTPUT IN C++

int main()
{
    int a; // declared 'a' as a int
    // taking the user inputs

    cin >> a;
    // cin ==> input function from std lib, ">>" is the extraction operator
    // a is the memory location to save the int value

    // taking the output

    cout << "Your input is: " << a << endl;
    // cout ==> output function from std lib, "<<" is the insertion operator

    return 0;
}

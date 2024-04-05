#include <iostream>
#include <cstdio>
using namespace std;

int function(int &n) // passing reference to the function
{
    n += 10; // modifying the value of the variable from main
    return n;
}

int function2(int *m) // passing address to the function
{
    *m += 20; // modifying the value of the variable from main
    return *m;
}
int main()
{
     // Call by reference using Reference
    cout << "Using Reference " << endl;
    int n = 10;
    cout << "n= " << n << endl;
    int result = function(n);
    cout << "Changed value " << result << endl;
    cout << "n = " << n << "\n\n";

    // Call by reference using Pointers 
    cout << "Using Pointers " << endl;
    int m = 20;
    int result2 = function2(&m);
    cout << "Changed value " << result2 << endl;
    cout << "m = " << m << endl;

    return 0;
}
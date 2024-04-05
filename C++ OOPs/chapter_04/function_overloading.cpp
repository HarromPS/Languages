#include <iostream>
#include <cstdio>
using namespace std;

// FUNCTION OVERLOADING AND WITH RETURN TYPES IN C++

// function overloading means passing different arguments in function
// having same or different return types and having same name

// void function
void display(int a, int b, int c)
{ // display==> name & int==> return type
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl
         << endl; // like \n\n
}

int display(double a, double b, double c)
{
    return a + b + c;
}

int main()
{
    int a, b, c;
    display(1, 2, 3);
    double x = display(10.3, 20.4, 30.78);
    cout << "The sum of given parameter is " << x << endl;

    return 0;
}
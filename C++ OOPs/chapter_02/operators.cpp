#include <iostream>
#include <cstdio>
using namespace std;

// OPERATORS IN C++

int main()
{
    // Arithmetic operators

    int a, b;
    cout << "Enter the first number" << endl;
    cin >> a;

    cout << "Enter the second number" << endl;
    cin >> b;

    cout << "The addition of two numbers is: " << a + b << endl;
    cout << "The substraction of two numbers is: " << a - b << endl;
    cout << "The multiplication of two numbers is: " << a * b << endl;

    // typecasting int ==> float, (float)a
    cout << "The division of two numbers is: " << (float)a / b << endl;
    cout << "The modulus/remainder of two numbers is: " << (a % b) << endl;

    // Assignment operators

    int x, y;
    x = 10; // x is assigned 10 using '='
    y = 3;  // y assigned 3
    y += x; // y reassigned as y=y+x;

    cout << x << endl;
    cout << y << endl;

    // Bitewise operator

    int l, m;

    cout << "Enter value of l and m"<<endl;
    cin >> l;
    cin >> m;

    l = l && m;
    m = m || m;
    l = m ^ l;
    m = l << l;
    l = m >> l;

    cout<<"The value of l is: "<<l<<endl;
    cout<<"The value of m is: "<<m<<endl;
}

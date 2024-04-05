#include <iostream>
#include <cstdio>
using namespace std;

// Binary Operator overloading

class Complex
{
    float a, b;

public:
    Complex() {}                 // Default Constructor function
    Complex(float a1, float b1); // Parameterized constructor function

    // return_type operator _symobol_ (argument);
    Complex operator+(Complex obj);
    Complex operator-(Complex obj);

    // Show function to show the complex number formed
    void show(void)
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(float a1, float b1)
{
    a = a1;
    b = b1;
}

// Defining the overloading operator
// return_type className :: operator_symbol_(argument)
Complex Complex ::operator+(Complex obj)
{
    Complex C;
    C.a = a + obj.a;
    C.b = b + obj.b;
    return C;
}

// OR

Complex Complex ::operator-(Complex obj)
{
    return Complex((a - obj.a), (b - obj.b));
}
int main()
{
    // Class objects created when constructor function is called
    Complex A(10, 20);
    A.show();
    Complex B(11, 12);
    B.show();

    // Calling the overloaded operator function
    Complex D = A + B;
    cout << "Sum ==>___________________" << endl;
    D.show();

    Complex D1 = A - B;
    cout << endl
         << "Difference ==>___________________" << endl;
    D.show();

    return 0;
}
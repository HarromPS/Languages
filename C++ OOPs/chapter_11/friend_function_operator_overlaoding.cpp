#include <iostream>
#include <cstdio>
using namespace std;

// Overloading Operators using Friend Functions
/*
Step 1: Replace the member function with friend functon Declaration
Syntax:

    friend className operator +( class objeacts as arguments )

Step 2: Redefine the operator function
Syntax:

    class_name operator+( class objects as arguments )
    {
        return class_name((a.x+b.x) , (a.y+b.y));
    }

*/

class Complex
{
    int real, imaginary;

public:
    // Default constructor with no parameters
    Complex() {}

    // Parameterized consructor with arguments
    Complex(int r, int img)
    {
        real = r;
        imaginary = img;
    }
    // Friend function with Comlex return type & is a operator overloader
    // friend return_type operator_symbol_(obj1 , obj2 );   // Declaration
    friend Complex operator+(Complex &obj1,Complex & obj2);

    // Display function using friend function
    void Display(void);
};

// Defining the Friend Function
Complex operator+(Complex &obj1, Complex &obj2)
{
    Complex X;
    X.real = obj1.real + obj2.real;
    X.imaginary = obj1.imaginary + obj2.imaginary;
    
    return X;
}

void Complex::Display(void)
{
    cout << "The Complex number is==> " << real << " + " << imaginary << endl;
}

// Driver code
int main()
{
    // Creating objects of Complex class & assigining the private members
    Complex obj1(1,2);
    Complex obj2(3,4);

    // Calling the friend function
    // In this case, C = A + B; is equivalent to C = operator+(A+B);

    Complex obj3=obj1+obj2;
    obj3.Display();



    return 0;
}
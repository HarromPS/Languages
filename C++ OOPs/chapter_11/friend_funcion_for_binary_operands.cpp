#include <iostream>
#include <cstdio>
using namespace std;

// Overloading Operators using Friend Functions
/*

    What if one of the operands is not a object of the class &
    is a built-in data type(integer,float,character) ?
    ==> friend function allows both approach ( objects of the class & built in data type )
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

    // friend return_type operator_symbol_(int a, Complex obj);   // Declaration
    friend Complex operator+(int a,Complex & obj);

    // Display function using friend function
    void Display(void);
};

// Defining the Friend Function
Complex operator+(int a, Complex &obj)
{
   Complex X;
   X.real = a + obj.real;
   X.imaginary = a + obj.imaginary;

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
    int a=10;
   
   Complex C;
   C = a + obj1;
   C.Display();
   return 0;
}
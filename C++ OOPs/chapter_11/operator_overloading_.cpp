#include <iostream>
#include <cstdio>
using namespace std;

/*
1. Operator Overloading means using the same operators & defining the
operator in the 'same scope' ==> Operator Overloading

2. Means redefining/oveloading the built-in operators(+, -, *, /, ++, --, etc.)

3. Overloading operators is a compiler-time polymorphism where an operator is
    provided with user defined meaning.

4. Almost every operator can be overloaded except some:
   a) class memeber access operator (. , ,*)
   b) scope resolution operator ( :: )
   c) size of operator (sizeof())
   d) member selector ( . )
   e) ternery/conditional operator ( ?: )

5. Syntax:
    return_type class_name :: operator op (arguments)
    {
        // Function body
    }
*/

class Complex
{
private:
    int real, imaginary;

public:
    // Default constructor
    Complex() {}
    
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    void Show()
    {
        cout<< "The complex number is " << real << " + " << imaginary << "i" << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }

    int operator++(int a)
    {
        int temp;
        a++;
        temp = a;
        cout << temp << " unary + operator " << endl;

        --a;
        temp = a;
        cout << temp << " unary + operator " << endl;

        temp = --a;
        cout << temp << " unary + operator " << endl;

        --a;
        temp = --a;
        cout << temp << " unary + operator " << endl;
    }

    int operator+(int a)
    {
        int temp;
        a++;
        temp = a;
        cout << temp << "<== Temp of binary + operator " << endl;

        --a;
        temp = a;
        cout << temp << "<== Temp of binary + operator " << endl;

        temp = --a;
        cout << temp << "<== Temp of binary + operator " << endl;

        --a;
        temp = a++;
        cout << temp << "<== Temp of binary + operator " << endl;
    }
};

int main()
{
    Complex c1(10, 20);
    Complex c2(11, 12);
    Complex c3;

    // c3 = c1 + (c2); // c3 = c1.add(c2);  --> c1 is calling the constructor function
                    // .add(c2) ==> +(Complex c2)
    // c3=c1+c2;

    Complex A(1,2), B, C;
    A.operator+(3);
   
    // int x=5,y=4;
    // int z=x+y;
    // cout<<"The value is z is: "<<z<<endl;
    return 0;
}
int sum(int a)
{
    a++;
}
#include <iostream>
#include <cstdio>
using namespace std;

// Binary operator overloading ( - , *, / )

class Complex
{
    float real, imaginary;

public:
    Complex(){}; // Default constructor function
    Complex(float a1, float b1)
    {
        real = a1;
        imaginary = b1;
    }

    // Declaring Overloading function
    Complex operator-(Complex obj); // Substraction
    Complex operator*(Complex obj); // Multiplication
    Complex operator/(Complex obj); // Division

    void Display(void)
    {
        cout << "The Complex Number is: (" << real << "," << imaginary<<"i)" << endl;
    }
};

// Overloading Substn operator
Complex Complex ::operator-(Complex obj)
{
    Complex C;
    C.real = real - obj.real;
    C.imaginary = imaginary - obj.imaginary;
    return C;
}

// Overloading Multpn operator
Complex Complex ::operator*(Complex obj)
{
    Complex C;
    C.real = real * obj.real;
    C.imaginary = imaginary * obj.imaginary;
    return C;
}

// Overloading Division operator
Complex Complex ::operator/(Complex obj)
{
    Complex C;
    C.real = real / obj.real;
    C.imaginary = imaginary / obj.imaginary;
    return C;
}

int main()
{
    // Calling the Class Constructor functions
    Complex A(10,11);
    A.Display();
    Complex B(12,13);
    B.Display();

    // Calling the Substn Operator functions 
    Complex D1=A-B;
    cout<<endl;
    cout<<"The Substraction is==>"<<endl;
    D1.Display();

    // Calling the Multpn Operator functions 
    Complex D2=A*B;
    cout<<endl;
    cout<<"The Multiplication is==>"<<endl;
    D2.Display();

    // Calling the Division Operator functions 
    Complex D3=A/B;
    cout<<endl;
    cout<<"The Division is==>"<<endl;
    D3.Display();


    return 0;
}
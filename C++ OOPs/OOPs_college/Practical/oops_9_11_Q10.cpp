#include <iostream>
#include <cstdlib>
using namespace std;

// Q10. Write a program to perform the addition of two complex numbers
// using operator overloading.
class Complex
{
    float real;
    float imaginary;

public:
    void setValue(float r, float img)
    {
        real = r;
        imaginary = img;
    }
    Complex operator+(Complex &);
    Complex operator*(Complex &);
    Complex operator-(Complex &);
    Complex operator/(Complex &);

    void Display();
};
// Defining the operator method outside the class for addition
Complex Complex::operator+(Complex &obj2)
{
    Complex temp;
    temp.real = real + obj2.real;
    temp.imaginary = imaginary + obj2.imaginary;
    return temp;
}
// Defining the operator method outside the class for multiplication
Complex Complex::operator*(Complex &obj2)
{
    Complex temp;
    temp.real = real * (obj2.real);
    temp.imaginary = imaginary * (obj2.imaginary);
    return temp;
}
// Defining the operator method outside the class for substraction
Complex Complex::operator-(Complex &obj2)
{
    Complex temp;
    temp.real = real - (obj2.real);
    temp.imaginary = imaginary - (obj2.imaginary);
    return temp;
}
// Defining the operator method outside the class for division
Complex Complex::operator/(Complex &obj2)
{
    Complex temp;
    temp.real = real / (obj2.real);
    temp.imaginary = imaginary / (obj2.imaginary);
    return temp;
}
void Complex ::Display()
{
    cout << "The complex number is==>(" << real << " + " << imaginary << "i)" << endl;
}
int main()
{
    float x, y, x1, y1;
    cout << "Enter numbers for first complex number:" << endl
         << "1:: ";
    cin >> x;
    cout << "2:: ";
    cin >> y;

    cout << "Enter numbers for second complex number:" << endl
         << "1:: ";
    cin >> x1;
    cout << "2:: ";
    cin >> y1;

    Complex A;
    Complex B;
    A.setValue(x, y);
    B.setValue(x1, y1);
    cout << endl
         << "The two complex number are::" << endl;
    A.Display();
    B.Display();

    // Resulting object
    Complex C;
    C = A + B;
    cout << endl
         << "The addition of two complex number is==> " << endl;
    C.Display();

    // Resulting object
    Complex D;
    D = A * B;
    cout << endl
         << "The multiplication of two complex number is==> " << endl;
    D.Display();

    // Resulting object
    Complex E;
    E = A - B;
    cout << endl
         << "The substraction of two complex number is==> " << endl;
    E.Display();

    // Resulting object
    Complex F;
    F = A / B;
    cout << endl<< "The division of two complex number is==> " << endl;
    F.Display();
    return 0;
}
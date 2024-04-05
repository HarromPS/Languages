#include <iostream>
#include <cstdlib>
using namespace std;

// Q11. Write a Program to overload operators like *, <<, >> using friend function.
class Complex
{
    float num1, num2;
    friend Complex operator*(Complex &, Complex &);
    friend Complex operator>>(Complex &, Complex &);
    friend Complex operator<<(Complex &, Complex &);

public:
    void setValue(float r, float img)
    {
        num1 = r;
        num2 = img;
    }

    void Display();
};
Complex operator*(Complex &);
Complex operator>>(Complex &, Complex &);
Complex operator<<(Complex &, Complex &);

// Defining the operator method outside the class for multiplication
Complex operator*(Complex &obj1, Complex &obj2)
{
    Complex temp;
    temp.num1 = obj1.num1 * (obj2.num1);
    temp.num2 = obj1.num2 * (obj2.num2);
    return temp;
}
// Defining the operator method outside the class for right shift
Complex operator>>(Complex &obj1, Complex &obj2)
{
    Complex temp;
    int shift, x, y;
    cout << "Enter the number of shift: ";
    cin >> shift;
    x= obj1.num1 ;
    y= obj2.num1 ;
    temp.num1 = x >> shift;
    temp.num2 = y >> shift;

    return temp;
}
// Defining the operator method outside the class for left shift
Complex operator<<(Complex &obj1, Complex &obj2)
{
    Complex temp;
    int shift, x, y;
    cout << "Enter the number of shift: ";
    cin >> shift;
    x= obj1.num1 ;
    y= obj2.num1 ;
    temp.num1 = x << shift;
    temp.num2 = y << shift;

    return temp;
}
void Complex ::Display()
{
    cout << "(" << num1 << ", " << num2 << ")" << endl;
}
int main()
{
    float x, y, x1, y1;
    cout << "Enter numbers for first object:" << endl
         << "1:: ";
    cin >> x;
    cout << "2:: ";
    cin >> y;

    cout << "Enter numbers for second objct:" << endl
         << "1:: ";
    cin >> x1;
    cout << "2:: ";
    cin >> y1;

    Complex A;
    Complex B;
    A.setValue(x, y);
    B.setValue(x1, y1);
    cout << endl
         << "The two number are::" << endl;
    A.Display();
    B.Display();
    // Resulting object
    Complex C;
    C = A * B;
    cout << "The multiplication of two complex number is==> " << endl;
    C.Display();

    // Resulting object
    Complex D;
    D = A >> B;
    cout << "The numbers after right shift==> " << endl;
    D.Display();

    // Resulting object
    Complex E;
    E = A << B;
    cout << endl
         << "The numbers after left shift==> ";
    E.Display();

    return 0;
}
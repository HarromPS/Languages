#include <iostream>
#include <cstdio>
using namespace std;

// FRIEND CLASS 
class complex;

class calculator
{
public:
    int sumRealcomplex(complex, complex);
    int sumimgcomplex(complex, complex);

};
// WHAT IF WE NEED TO DECLARE 100 FUNCTOINS, SO FRIEND CLASS CAN BE USED
// TELLING COMPILER THAT "ANY FUNCTION OF CLASS CALCULATOR CAN ACCESS THE PRIVATE DATA OF 
// CLASS COMPLEX "

// ALTIRE/ALTERNATIVE: "DECLARING THE ENTIRE CLACULATOR CLASS AS FRIEND CLASS OF COMPLEX CLASS"

class complex
{
    int real;
    int img;

    //  DECLARING INDIVIDUALLY FUNCTIONS AS FRIENDS 
    // friend int calculator ::sumRealcomplex(complex, complex);
    // friend int calculator ::sumimgcomplex(complex, complex);

    // Altier: Declaring the whole class as a friend function of class complex

    friend class calculator;

public:
    void setdata(int a, int b) // a and b from main as arguments
    {
        real = a;
        img = b;
    }

};

int calculator ::sumRealcomplex(complex o1, complex o2)
{
    return (o1.real + o2.real);
}

int calculator ::sumimgcomplex(complex o1, complex o2)
{
    return (o1.img + o2.img);
}

int main()
{
    complex o1, o2;
    o1.setdata(10, 20);
    o2.setdata(30, 40);

    // creating objects of class calculator to call the function
    calculator c;
    // passing arguments of objects to the function

    int result = c.sumRealcomplex(o1, o2);
    // 10 + 30 ==> 40
    cout << "The sum of real parts of o1 and o2 is: " << result << endl;

     int result1= c.sumimgcomplex(o1, o2);
    // 10 + 30 ==> 40
    cout<<"The sum of imaginery parts of o1 and o2 is: " << result1 << endl;

    return 0;
}
#include <iostream>
#include <cstdio>
using namespace std;

// Arrow Operator

class complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    complex c2;

    // Pointer to Object

    // Another way to create object using new operator
    complex *ptr2 = new complex;

    // ptr2 "points to" setdata() function
    // setdata() of object to which ptr2 is pointing
    // object(new complex) ko point kar raha hai
    // to uska setdata

    ptr2->setdata(45, 32); // points to setdata
    (*ptr2).getdata();

    return 0;
}
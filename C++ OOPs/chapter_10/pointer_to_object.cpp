#include <iostream>
#include <cstdio>
using namespace std;

// Pointer to Object

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
    complex c1, c2, c3;
    // Regular way to objects
    c1.setdata(10, 20);
    c1.getdata();

    // Pointer to Object
    complex *ptr = &c2; // pointer of type complex class stores a
                        // address of the object

    // (*(&c2)) <==> c2 <==> (*ptr)
    (*ptr).setdata(11, 22);

    // (*(&c2)) <==> c2 <==> (*ptr)
    (*ptr).getdata();

    // Another way to create object using new operator
    complex *ptr2 = new complex;
    (*ptr2).setdata(45, 32);
    (*ptr2).getdata();

    return 0;
}
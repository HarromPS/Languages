#include <iostream>
#include <cstdio>
using namespace std;
// Friend Function

// FORWARD DECLARATION
// declared here and defined later
class complex;

class calculator
{
public:
    // function of class calculator
    // just defined inside the class

    // if defined that means using a class which was not defined before this class
    int sumRealcomplex(complex, complex);
    int sumimgcomplex(complex, complex);

};

class complex
{
    int real;
    int img;
    // declared the function of calculator class as a friend of class complex
    // to allow it to access the private data of the class complex

    //  DECLARING INDIVIDUALLY FUNCTIONS AS FRIENDS 
    
    friend int calculator ::sumRealcomplex(complex, complex);
    friend int calculator ::sumimgcomplex(complex, complex);


public:
    void setdata(int a, int b) // a and b from main as arguments
    {
        real = a;
        img = b;
    }

};

// defined outside the class and after the friend class
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

    // creating objects of class claculator to call the function
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
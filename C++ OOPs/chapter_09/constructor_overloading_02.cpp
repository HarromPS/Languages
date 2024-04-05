#include <iostream>
#include <cstdio>
using namespace std;

// Constructor overloading ==> Multiple constructors with different
// Arguments when defined in a class we say constructor overloaded.

class complex
{
    int a, b;

public:
    complex(void) // Function which takes no arguments (zero arguments)
    {
        cout << "This is a void constructor" << endl;
        a=0;
        b=0;
    }

    complex(int x, int y) // Function which takes two integer arguments
    {
        a = x;
        b = y;
        cout<<"\nThis is a two paramerized constructor"<<endl;

    }

    complex(int a1) // Function takes only one argument
    {
        a=2*a1;
        b = 0;
        cout<<"\nThis is a one paramerized constructor"<<endl;
    }

    void display()
    {
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    complex obj1;     // VOID parameters matches with VOID constructor
    obj1.display();

    complex obj2(10,20);    // 2 INT parameters matches with 2 INT constructor
    obj2.display();

    complex obj3(2);    // 1 INT parameter matches with 1 INT constructor
    obj3.display();

    // Types of function calls 

    complex k1=10;      // k1=10 <==> obj3(2).
    k1.display();

    complex k2=complex(10);      // k1=10 <==> obj3(2).
    k2.display();

    return 0;
}

#include <iostream>
#include <cstdio>
using namespace std;
// Default VS Parameterized constructors

// Creating a class
class complex
{
    int a, b; // private members
public:
    // complex(void); // Constructor takes nothing =>void
    //                // default constructor

    complex(int, int); // will take two inputs of integers 

    void display(void)
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
};

// DEFAULT:

// complex ::complex(void)     // default constructor, no parameters
// // no return type, of class.. ,scope resolution, name(arg)
// {
//     a = 0;
//     b = 0;
// }

// PARAMETERIZED:

complex ::complex(int x, int y) // default constructor, no parameters
// no return type, of class.. ,scope resolution, name(arg)
{
    a = x;
    b = y;
}

int main()
{
    // Automatically invoked for c1

    // Implicit call ==> Direct call 
    // like function_function name (arguments)
    complex c1(10, 20);
    c1.display(); // displays the set values

    // Explicit call ==> Indirect call
    // complex object & object stores the indirect call 
    // data typr var=function(parameters)   ==> function call 
    complex c2=complex(39,234);
    c2.display();

    return 0;
}

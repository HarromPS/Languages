#include <iostream>
#include <cstdio>
using namespace std;

// 1. Constructors are the special member function
// 2. It is of the same name as of the class name
// 3. The object initialize itself when it is created
// 3. It is automatically invoked(called) when a object is created
// 4. We can assign any task in the constructor
// 5. "Constructor" ==> construction of the values of the objects

// Creating a class
class complex
{
    int a, b; // private members
public:
    complex(void); // Constructor takes nothing =>void
                   // default constructor
    void display(void)
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
};

// Defining the constructor outside as we define other functions
// using scope resolution operator

// name is so because it constructs the values for the data membres
// e.g private data members

complex ::complex(void)

// no return type, of class.. ,scope resolution, name(arg)

{
    // cout<<"Hello World !"<<endl;

    a = 0; // providing direct values to the private data members
    b = 0; // reduced setvalue() function
}
int main()
{
    // Automatically invoked for c1,c2,c3
    complex c1, c2, c3;
    // for c1
    c1.display(); // displays the set values
    // for c2
    c2.display();
    // for c3
    c3.display();

    // IMP NOTES:
    // 1. Constructor with no parameters ==>default constructor
    // 2. It has no return types(not even void) & do not return any values
    // 3. It can have default arguments
    // 4. We cannot refer to their address
    return 0;
}

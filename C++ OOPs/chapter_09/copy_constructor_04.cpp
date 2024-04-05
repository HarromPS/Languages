#include <iostream>
#include <cstdio>
using namespace std;

// Copy Constructor ==> A copy constructor is used to declare and initialize an object
// for another object.
// means the values of class members of one object is copied to the values of 
// class members of the second object 

// A copy takes the reference to an object of the same class as itself as an argument

// e.g  class_name obj1;
//      class_name obj2(obj1);

// Copy constructor takes a reference to an object of the same class as an argument.
// e.g Sample(Sample &t)     where; Sample is a class
//   {
//              id=t.id;    // member of one objof cpy const is copied
                            // from the previous obj's member values 
//   }

class Number
{
    int a;

public:
    // Default constructor which takes nothing
    // Constructor which takes arguments
    Number() {}
    
    Number(int num)
    {
        a = num;
    }

    // WHEN NO COPY CONSTRUCTOR IS FOUND, COMPILER SUPPLIES ITS OWN COPY CONSTRUCTOR

    // Copy constrctor ==> reference taking constructor/function

    Number(Number &obj)
    {
        cout << "Copy constructor called !!!" << endl;
        a = 5*obj.a;
    }

    // If copy constructor is commented.., then there is no error 
    // the 
    void show();
};

void Number ::show()
{
    cout << "The number for this object is: " << a << endl;
}
int main()
{
    // " a, b are the objects of the class & we invoked constructor function "
    // "so matching constructor is default constructor so it will invoke that"
    Number a, b;
    Number z(10); // z ke 'a' ko "10" ye value assign ho gai
    z.show();       // 1 show

    // y.show();
    // z1 will exactly resemble/similar to 'z' or 'x' or 'y'

    /*Number z1(z); */  //OR
    // New constructor is invoked as previously declared constructed is not invoked
    // like Number z1;
    //      z1=z;   // copy constructor is not invoked here
    Number z1 = z;
    // passing previous object to the new one
    // z1 ke 'a' ko "z" ke 'a' ki "10" ye value assign ho gai
    // jo object pass kiya tha uski

    // value of private member of "z1" is assigned with the value of the object
    // "z"s private member i.e 10 by passing the reference of "z" to
    // copy constructor so "z1" will give output of "z";
    z1.show();      // 2 show

    cout << endl;
    Number x(20);
    x.show();       // 3 show
    // we can do the same for the other objects as well

    Number x1(x);   // ==> Number x1= x ;

    // value of private member of "x1" is assigned with the value of the object
    // "x" 's private member i.e 20 by passing the reference of "x" to
    // copy const x1" will give output as "x";
    x1.show();       // 4 show
    
    cout<<"Last call"<<endl;
    a=z;        // copy constructor is not called 

    a.show();   // showing a's value for "a" object only
    return 0;
}
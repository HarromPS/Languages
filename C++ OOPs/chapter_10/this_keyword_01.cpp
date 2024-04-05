#include <iostream>
#include <cstdio>
using namespace std;

// "this" is a pointer which is passed as a hidden argument to all member functions
// it is available as a local variable within the body of the
// function.
// "this" acts as an implicit argument to all the member functions
class A
{
private:
    int a;

public:
    int setData(int a1)
    {
        // 1) 1st use 
        // When local variable name same as member's name 

        // this ==> (A * this) means 'this' is a class pointer
        // 'points to' the object which has invoked the function 

        // 'a' is the class member
        // a1 is the argument / local variable of the function0

        this->a = a1;

        // this pointer is pointing the 'obj' object because
        // it has invoked the setData function 

        // 2) To return reference of the invoking object
        // means returning the object only using 'this' keyword
        // means we get the address of the object 
        // means we get the pointer which is poining the object 
        // which has invoked the member function
        // & member function are invoked using objects.
    }

    void Display()
    {
        cout << "The number 'a' is " << a << endl;
    }
};

int main()
{
    A obj;
    obj.setData(10);
    obj.Display();

    return 0;
}
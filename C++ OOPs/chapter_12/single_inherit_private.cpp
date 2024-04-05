#include <iostream>
#include <cstdio>
using namespace std;

// Single Inheritence

// Creating a Base class
class Base
{
    int data1; // private by default
public:
    int data2;
    void setData();
    // to get data of data2
    int getData2();
    // to get data of data1
    int getData1();
};
// Defining the members functions outside th class
void Base ::setData()
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1() // i.e. it is data1
{
    return data1;
}
int Base ::getData2() // i.e it is data2
{
    return data2;
}
// Creating a Derived class Inherited from the base class
class Derived : private Base
{
    // Derived class has all the access to the public members & member functions
    // of the Base class
    // Means Derived class has inherited the members publically
    int data3;

public:

    /* int data2;            // public section of base class
    void setData();          // is now private to Derived class
    // int getData2();
    // int getData1();*/

    void process(); // Addditional functions
    void Display();
};
// Defining the functions outside the class
void Derived ::process()
{
    // we can call the functions of the base class here
    setData();
    // data3 = data2 * data1;
    // Means ==>
    data3 = data2 * getData1() - 3;
}

void Derived ::Display()
{
    // data1 is accessed using member function of the base class publically
    cout << "The value of Data 1 is " << getData1() << endl;
    cout << "The value of Data 2 is " << data2 << endl;
    cout << "The value of Data 3 is " << data3 << endl;
}
int main()
{
    // Creating the objects of the Derived class which can access the
    // members of the Base class

    Derived der_obj;
    // der_obj.setData();      // inaccessible privately inherited function
    //  of the base class
    der_obj.process();
    der_obj.Display();

    return 0;
}
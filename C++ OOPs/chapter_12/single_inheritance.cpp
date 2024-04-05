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
    int getData1(int );
};
// Defining the members functions outside th class
void Base ::setData()
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1(int a) // i.e. it is data1
{
    data1=a;
    return data1;
}
int Base ::getData2() // i.e it is data2
{
    return data2;
}
// Creating a Derived class Inherited from the base class
class Derived : public Base
{
    // Derived class has all the access to the public members & member functions
    // of the Base class
    // Means Derived class has inherited the members publically
    int data3;

public:
    /* int data2;           // public section Inherited from Base class
     void setData();
    // int getData2();
    // int getData1();*/

    void process(); // Addditional functions
    void Display();
};
// Defining the functions outside the class
void Derived ::process()
{
    // We can set the data1 using getData()
    //
        getData1(2);    // we can pass the arguments to the called function 
                        // and can initialize the private members of the base class
    //

    // data3 = data2 * data1;
    // Means ==>
    data3 = data2 * getData1(2)-3;
}

void Derived :: Display()
{
    // data1 is accessed using member function of the base class publically
    cout<<"The value of Data 1 is "<<getData1(2)<<endl;
    cout<<"The value of Data 2 is "<<data2<<endl;
    cout<<"The value of Data 3 is "<<data3<<endl;

}
int main()
{
    // Creating the objects of the Derived class which can access the 
    // members of the Base class

    Derived der_obj;
    der_obj.setData();      // accessing the public function of the base class
    der_obj.process();
    der_obj.Display();

    return 0;
}
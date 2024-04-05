#include <iostream>
#include <cstdio>
using namespace std;

// Passing objects as arguments to the function
class complex
{
private:
    int real;
    int imagenary;

public:
    // passing the arguments from the main to the function as int a and b
    // initializing private members as int a & int b values
    void setdata(int a, int b)  // a=1,b=2
    {
        real = a;      // real provided with value a
        imagenary = b; // imagenery provided with value b
    }

    // passing the arguments from the main to the function
    // AS (CLASS_TYPE OBJECT, CLASS_TYPE OBJECT)

    // initializing private members as complex o1 & complex o2 values
    // using class as a datatype and its obejcts as its variables
    void setdatabysum(complex obj1, complex obj2)
    {
        real = obj1.real + obj2.real;      // real provided with value a
        imagenary = obj1.imagenary + obj2.imagenary; // imagenery provided with value b
    }

    void printdata()
    {
        cout<<"The complex no is: "<<real<<" + "<<imagenary<<"i"<<endl;
    }
};

int main()
{
    complex o1,o2,o3;

    o1.setdata(1,2);        // will take arguments of int types
    o2.setdata(4,5);
    o3.setdatabysum(o1,o2); // will take arguments of class types

    o3.printdata();

    return 0;
}
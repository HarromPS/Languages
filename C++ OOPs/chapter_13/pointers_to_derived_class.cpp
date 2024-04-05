#include <iostream>
#include <cstdio>
using namespace std;

// Pointers to Derived classes
class Base_Class
{
public:
    int var_base;
    void Display()
    {
        cout << "1 Displaying Base class variable " << var_base << endl;
    }
};
class Derived_Class : public Base_Class
{
public:
    int var_Derived_Class;
    void Display()
    {
        cout << "2 Displaying Base Class class variable " << var_base << endl;
        cout << "2 Displaying Derived Class class variable " << var_Derived_Class << endl;
    }
};
int main()
{
    // Creating Base Class objects
    Base_Class obj_base;
    // Base Class Pointer
    Base_Class * pointer_base;

    // Creating Derived class object
    Derived_Class obj_Derived;

    // Pointing the Base class pointer to the Derived class object
    pointer_base = &obj_Derived;

    // Assigining the variables of Base class
    pointer_base->var_base=10;

    // Will Show Error
    // pointer_base->var_Derived_class=20;

    // Only the members of the Base class are accessed by the pointer of Base
    // & Functions of Derived class is not invoked.
    pointer_base->Display();

    // Creating the Derived class pointer
    Derived_Class* pointer_Derived;
    pointer_Derived=&obj_Derived;
    pointer_Derived->var_Derived_Class=110;

    // The members of the Base class can be accessed by the 
    // Derived class pointer as well
    pointer_Derived->var_base=220;

    // Pointer of Derived class accesses the function of Derived class.
    pointer_Derived->Display();

    //  Derived_Class* ptr=&obj_base;// => gives error
    
    return 0;
}
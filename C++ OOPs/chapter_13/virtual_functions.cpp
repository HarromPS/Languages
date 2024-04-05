#include <iostream>
#include <cstdio>
using namespace std;

// Virtual Functions
// if pointer of the Base is pointing to object of the Derived class
// & if we want to invoke the function of Derived class we make the function of
// the Base class as a Virtual Function


// Make the Function of the base class as virtual Function using the keyword 
// 'virtual' 
/*
Syntax:
    virtual void Display()
    {

    }
    So that the function of the base class is not invoked
*/

class Base_Class
{
public:
    int var_base=100;
    virtual void Display()
    {
        cout << "1 Displaying Base class variable " << var_base << endl;
    }
};
class Derived_Class : public Base_Class
{
public:
    int var_Derived_Class=12;
    void Display()
    {
        cout << "2 Displaying Base Class class variable " << var_base << endl;
        cout << "2 Displaying Derived Class class variable " << var_Derived_Class << endl;
    }
};
int main()
{
    // Creating a Base class pointer 
    Base_Class * pointer_base;

    Base_Class obj_base;
    Derived_Class obj_Derived;

    // Pointing the pointer to the Deriverd class object
    pointer_base=&obj_Derived;
    pointer_base->Display();

    return 0;
}
#include <iostream>
#include <cstdio>
using namespace std;

// Ambiguity in Single Inheritance
// Creating a Base class
class Base
{
public:
    void Display()
    {
        cout << "Hello to this beautiful World!" << endl;
    }
};
// Creating a Derived class from Base class publically

// To Resolve Ambiguity Derived class's Display() function Overrides 
// Base class's Display() function 
class Derived : public Base
{
public:
    void Display() // Same name as Base class
    {
        cout << "Nayi Dunoya ko Nameste" << endl;
    }
};
int main()
{
    // Creating a object of Base class
    Base obj_1;
    obj_1.Display();
    
    // Creating a object of Derived class
    Derived obj_2;
    obj_2.Display();\
    cout<<endl;

    // Invoking the function of Base class using Derived class object 
    // By applying Scope Resolution Operator :: 
    Derived obj_3;
    obj_3.Base :: Display();

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
/*
Q18. Write a Program to illustrate the use of pointers to objects which are related by inheritance.*/
// Pointer to objects means ==> Accessing Derived class via Base pointer
class Base
{
public:
    int data_base;
    virtual void getData(int data)
    {
        this->data_base = data;
    }
    virtual void Display()
    {
        cout << "The data of Base class is: " << data_base << endl;
    }
};
class Derived : public Base
{
public:
    int data_derived;
    void getData(int data)
    {
        this->data_derived = data;
    }
    void Display()
    {
        cout << "The data of Derived class is: " << data_derived << endl;
    }
};

int main()
{
    // Creating a pointer of the Base class
    Base objB;
    Base *obj_base;
    obj_base = &objB;
    obj_base->getData(10);
    obj_base->Display();

    // Creating a pointer of the Derived class
    Derived objD;
    Derived *obj_derived;
    obj_base = &objD;
    obj_base->getData(20);
    obj_base->Display();

    return 0;
}
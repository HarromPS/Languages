#include <iostream>
#include <cstdio>
using namespace std;
// Q18) WAo ti illustrate the use of pointers to objects which are
// relateed by inheritance.
class Base
{
public:
    int a, b;
    Base(){}
    Base(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    virtual void Display()
    {
        cout<<"This are the member function of the base class"<<endl;
        cout << "a:: " << a << ", b:: " << b << endl;
    }
};
class Derived : public Base
{
public:
    int c, d;
    void getData(int c1, int d1)
    {
        c = c1;
        d = d1;
    }
    
    void Display()
    {
        cout<<"This are the member function of the Derived class"<<endl;
        cout << "c:: " << c << ", d:: " << d << endl;
    }
};
int main()
{
    Base obj_base(10, 20);
    Base *ptr_base;
    ptr_base = &obj_base;
    cout<<"Pointer of the bass base class is pointing to the object of the base class"<<endl;
    (*ptr_base).Display();

    Derived obj_derived;
    obj_derived.getData(11,33);
    Derived *ptr_derived;
    ptr_derived=&obj_derived;
    cout<<endl<<"Pointer of the Derived class is pointing to the object of the Derived class"<<endl;
    ptr_derived->Display();
    cout<<endl;
    ptr_base=&obj_derived;
    cout<<"Pointer of the Base class is pointing to the object of the Derived class"<<endl;

    ptr_base->Display();

    return 0;
}
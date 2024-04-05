#include <iostream>
#include <cstdio>
using namespace std;

// Class Template with Default Arguments
/*
==> If the datatypes of the class template are specified then it will be used
    ,if not specified then the default datatypes specified will be used.

    If specified then default arguments are then overrided.
Syntax:
template <class T1=int, class T2=char>
class className{
    // classbody

};
*/
template <class T1 = int, class T2 = char, class T3 = char>
class myClass
{
public:
    T1 x;
    T2 y;
    T3 z;
    myClass(){}
    myClass(T1 x1, T2 y1)
    {
        x = x1;
        y = y1;
    
    }
    myClass(T1 x1, T2 y1,T3 z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }
    void Display()
    {
        cout << "The value of x=" << x << endl;
        cout << "The value of y=" << y << endl;
        cout << "The value of z=" << z << endl;
        
    }
};
int main()
{
    // For default template to execute leave the angular braces empty
    myClass<> obj1(10, 'A');
    obj1.Display();
    cout<<endl;

    // To override the default class template specify the datatypes 
    // in the angular braces
    myClass <float,char,int>obj2(1.2,'B',11);
    obj2.Display();
    cout<<endl; 

    // If the specified datatype is not matched with the passed agument the 
    // the program misbehaves
    myClass <float,char,int>obj3('c','B',11);
    obj3.Display();

        return 0;
}
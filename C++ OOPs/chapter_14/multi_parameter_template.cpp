#include <iostream>
#include <cstdio>
using namespace std;

// Multi-parameter template
/*
Syntax:
template<class T1, class T2>
class nameOfclass
{
    // body of class
};
*/

template <class Type1, class Type2>
class myClass
{
public:
    Type1 data1;
    Type2 data2;
    void Display()
    {
        cout << "Data1: " << data1 << ", Data2: " << data2 << endl;
    }
    myClass(Type1 d1, Type2 d2)
    {
        data1 = d1;
        data2 = d2;
    }
};

// Normal class
class MyClass
{
public:
    int data1;
    char data2;
    void Display()
    {
        cout << "Data1: " << data1 << ", Data2: " << data2 << endl;
    }
    MyClass(int d1, char d2)
    {
        data1 = d1;
        data2 = d2;
    }
};
int main()
{
    // Creating objects of myclass with two different data types
    cout<<"Datas of Template class"<<endl;
    myClass<int, char> obj1(10, 'A');
    obj1.Display();

    myClass<float, int> obj2(11.0, 121);
    obj2.Display();

    myClass<double, string> obj3(1.110, "Apple");
    obj3.Display();

    // Normal Class
    cout<<endl<<"Datas of Normal class"<<endl;
    MyClass obj(100, 'B');
    obj.Display();

    return 0;
}
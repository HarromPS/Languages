#include <iostream>
#include <cstdio>
using namespace std;

// OVERLOADING THE TEMPLATE CLASS/FUNCTION

// Defining the member functions of the template class  outside the class
template <class T>
class myclass
{
public:
    int data;
    myclass(T d1)
    {
        data = d1;
    }

    // Defining the method outside the class
    void Display();
};

// Overloading the template
template <class T>
void myclass<T>::Display()
{
    cout << "In Display function: " << data << endl;
}

// Normal function
void function(int a1)
{
    int a=a1;
    cout<<"Value: "<<a<<endl;
}

// function with template class
template<class T>
void function(T a1)
{
    T a=a1;
    cout<<"Value: "<<a<<endl;
}

int main()
{
    myclass <int>obj(10);
    cout<<"In main function: "<<obj.data<<endl;
    obj.Display();
    cout<<"TEMPALTE OVERLAODING"<<endl;

    cout<<"This is a normal function"<<endl;
    function(3);
    // The above function is now overloaded 
    // function call with different types

    cout<<"This is a templatized function"<<endl;
    function(1.2);  // Exact match takes the highest priority
    function('A');
    function("String");

    return 0;
}
#include <iostream>
#include <cstdio>
using namespace std;

// Default arguments to the constructor

class simple
{
    int data1;
    int data2;
    int data3;

public:
    // Creating a constructor with default arguments
    simple(int a, int b = 10, int c = 20)
    {
        data1 = a;
        data2 = b;
        data3 = c;
        cout << "Assigend with arguments" << endl;
    }
    // void function to display the private data members
    void display()
    {
        cout << "The value of data1, data2 & data3 is "
             << data1 << ", " << data2 << " & " << data3 << endl;
    }
};

class complex
{
    int real;
    int img;

public:
    complex(int a, int b = 12)
    {
        real = a;
        img = b;
    }

    complex(int a, int b,int c=66)
    {
        real=a;
        img=b*c;
        cout<<real<<" & "<<img<<endl;
    }
    void display1();
};
void complex :: display1()
    {
        cout << "The complex number is: " << real << " + " << img << "i" << endl;
    }
int main()
{
    simple obj(11);
    obj.display();

    simple obj2(12,13,89);
    obj2.display();

    complex obj3(13);   //invokes constructor with 2 parameters( 1 actual para & other default)
    obj3.display1();
    
    complex obj4(15,9,9);   //invokes constructor with 3 parameters (2 actual para & 3rd default)
    obj4.display1();

    return 0;
}
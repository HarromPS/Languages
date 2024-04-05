#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

// FRIEND FUNCTION
// To understand the friend function
// let us create a class first

class complex
{
    int real; // real & imagenary
    int imagenery;

public:
    void setdata(int a, int b)
    {
        real = a;
        imagenery = b;
    }
    // To allow the sumnumbers function to access the private data
    // we are making it a friend with the class
    // friend of class function name (access with parameters o1 and o2)

    // sumnumbers is a function getting o1 and o2 as arguments of
    // class complex==> return type & o1 o2 as vriables
    friend complex sumnumbers(complex o1, complex o2);
    void displaydata()
    {
        cout << "The complex number is: " << real << " + " << imagenery << "i " << endl;
    }
};

// complex sumnumbers is a function which is not the member of the class complex
// by it is tring to access the private data of class by using two object of class
// o1 and o2

//
complex sumnumbers(complex o1, complex o2)
{
    complex o3; // we can declare object of class inside a function as well

    // It cannot access the members directly by their names & need 
    // object_name.member_name to access the members
    // cout<<a;    // whose 'a' ==> not defined
    o3.setdata((o1.real + o2.real), (o1.imagenery + o2.imagenery));
    return o3;
}

int main()
{
    complex x;
    x.setdata(10, 29);
    x.displaydata();

    complex y, sum;
    y.setdata(30, 94);
    y.displaydata();

    // sum is a class obejct
    sum = sumnumbers(x, y);
    sum.displaydata();
    return 0;
}
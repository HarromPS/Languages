#include <iostream>
#include <cstdio>
using namespace std;

// POINTERS
// pointers are the variables which stores the address of 
// other variables
int main()
{
    int a = 10;    // variable a
    int *ptr = &a; // pointer variable declared
                   // *ptr stores the address of 'a' as its value
    // & is the address of operator --> memory address 
    // * is the dereference operator

    // Accessing the pointer values

    cout<<"The value of a is: "<<a<<endl;       // output: 10
    cout<<"The addres of a is: "<<&a<<endl;     // output: address of a
    cout<<"The value of ptr is: "<<ptr<<endl;   // output: address of a
    cout<<"The value of *ptr is: "<<*ptr<<endl<<endl; // output: 10

    // Pointer to pointer
    // which stores the address of a pointer

    int** c=&ptr;     // storing the address of b
    cout<<"The address of ptr is: "<<&ptr<<endl;
    cout<<"The address of c is: "<<c<<endl;

    cout<<"The value of ptr is: "<<*ptr<<endl;  // prints value of *ptr =10
    cout<<"The value of c is: "<<*c<<endl;     // prints address of *c 

    cout<<"The value of c is: "<<**c<<endl;     // prints value of **c =10



    return 0;
}
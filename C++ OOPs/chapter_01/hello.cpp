#include<iostream>
using namespace std;

int main()
{
    // IN C++ WE CAN USE BOTH THE I/O FUNCTIONS WHICH WE USE IN C

    int a;
    scanf("%d",&a);
    printf("The output is:%d\n",a);

    // OR std::cout<<"Hello World!";

    cout<<"Hello World!";   // Hello World is a string 
    // string is a datatype in C++
    // string variable_name;

    string hello="Hello New World!";

    cout<<"\n"<<hello;

    // in C we use printf to display the output 
    // but in C++ we use cout to display the output

    //===========================================

    // COMMENTS IN C/C++ 

    // comments are used to make the program more readable
    // for the programmer

    //  "This is a single comment"

    /* "This is a multiline comment" */ 

    return 0;
}

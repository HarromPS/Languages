#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
// VARIABLES AND CONSTANT VARIABLES
// Variables scope
// LOCAL & GLOBAL VARIABLES
int global = 10; // variable defined globally

// we cannot define global variable with same name outside main
// int global = 20; // local variable with same name as global variables.
// local variable have higher percedence
// & will be called locally

void glo()
{
    int a; // local variable declared inside a function

    // wil give output of global variable defined outside
    cout << "Globlal variable: " << global << endl;
}
int main()
{

    // int a, b, c;          // datatype variable_name;
    short _s783487a = 23; // can be declared using underscore
                          // and can be included with numbers as well
    short _Sa;            // variables in both C\C++ are case sensitive

    int a, b; // local variables declared inside the a function
    float c, d;
    a = 10;
    b = 20;
    c = 3.3;
    d = 23.23;

    // camelCase Notation.
    // helps the system to suggest the variable in VS code

    // proof:
    global = 100; // variable re-initialized & will call changed variable

    cout << "global:  " << global << endl;
    glo();

    // cout<<"The local integer variables are: \na= " <<a<<" & b= "<<b<<endl;
    // cout<<"& their sum is: "<<a+b<<endl;
    // cout<<"\nThe local float variables are: \na= " <<c<<" & d= "<<d<<endl;
    // cout<<"& their sum is: "<<c+d<<endl;

    int marksInMaths = 90;
    cout << "Your Marks in Maths is: " << marksInMaths << endl;

    char arr[10];                     // character array initialized same as in C
    cout << "Enter string: " << endl; // endl OR \n for newline
    cin >> arr;
    //    scanf("%[^\n]",arr)  ;                           // taking input from the user;
    cout << "Your string is: " << arr << endl; // endl OR \n for newline

    return 0;
}

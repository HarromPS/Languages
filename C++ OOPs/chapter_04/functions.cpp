#include <iostream>
#include <cstdio>
using namespace std;

    // like in our mathematics
    // FUNCTIONS

    //SYNTAX:
        //return_type function_name(parameter 1,parameter 2, parameter 3){
                // code
        // }

int sum(int a, int b)
    // int==>return type, sum==> function name, a and b are parameters
{
    int c;  // local variable
    c=a+b;
    return c;
} 

int main()  // main function, from where the execution of the program starts
{
    int a, b;
    cout<<"Enter the first number\n==>";
    cin>>a;

    cout<<"Enter the second number\n==>";
    cin>>b;

    cout<<"The function returned: "<<sum(a,b);
    
    return 0;
}
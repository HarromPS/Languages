#include<iostream>
#include<cstdio>
using namespace std;

/*
    Initialization List in C++
    C++ supports supports a special syntax for argument passing to 
    multiple base classes 

SYNTAX: 
    Derived-class-Constructor( argument list ) : initialization list-section 
    {
        // Body of the function 
        assignment + other codes;
    }       

    Meaning for a class constructor ( taking some aguments ) 
                    : (initialization list ) 
        "used for quick initialization of class members"
E.g: 
class Test
{
    int a,b;
    public: 
        // Creating a constructor function of class Test 
        Test( int i, int j) : a(i), b(j){
            constructor body
        }  
        // Writing members a & b as function taking arguments 
};

*/
class Test
{
    int a;  // Declared first 
    int b;  // Declared Second 
    int c;  // Declared Third
    public: 
        // Creating a constructor function of class Test 
        // Test( int i, int j) : a(i), b(j)
        // Test( int i, int j) : a(i), b(i+j)
        // Test( int i, int j) : a(i), b(2*j)
        // Test( int i, int j,int k) : a(i), b(a+j)

        Test( int i, int j,int k) :  b(j),a(i+b)
        // will throw garbage value a is initialized first as it is declared first 
        // It looks like this
        /*
            a=b+j;  // a will show garbage value as b is not initialized before 
            b=j;
        */

        // Test( int i, int j,int k) :  a(i),b(j+a),c(k-a)
        // Test( int i, int j,int k) :  a(i),b(j+a),c(k-a)
        {
            // a=i;
            // b=a+j;
            // constructor body
            cout<<"Constructor function is Called"<<endl;
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            // cout<<"The value of c is "<<c<<endl;

        }  
        
};
int main(){

    // Creating a Test class Object 
    Test obj(6,3,7);
    return 0; 
}
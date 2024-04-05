#include<iostream>
#include<cstdio>
using namespace std;

// Forward declaration that class B is defined later 
// or else how compiler will know that friend function uses class B private data
class B;

class A
{
    int num1;
    
    // Statement of class A that friend wala function is its friend

    // which takes private data of class A & B i.e (A,B)
    friend void friend_wala_function(A,B);

    public:
        void setdata(int value)
        {
            num1=value;
        }
};


class B
{
    int num2;
     // Statement of class B that friend wala function is its friend

    // which takes private data of class A & B i.e (A,B)
    friend void friend_wala_function(A,B);

    public:
        void setdata(int value)
        {
            num2=value;
        }
};

// Creating a function which will become friend of both the class
void friend_wala_function(A obj1, B obj2)
{
    // obj1.num1 ==> obj1 ka data; obj2.num2 ==> obj2 ka data
    cout<<"This function adds two numbers: "<<obj1.num1+obj2.num2<<endl;

}
int main(){

    A a1,x1;
    a1.setdata(3);

    B b1,y1;
    b1.setdata(4);
    
    // calling the function to print the sum of two numbers
    friend_wala_function(a1,b1);
    return 0; 
}
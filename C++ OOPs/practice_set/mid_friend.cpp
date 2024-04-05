/*
    WAP to find minimum & average of two integers of two different
    classes using friend function.
*/

#include<iostream>
#include<cstdio>
using namespace std;
class B;
class A
{
    int a;
    public:
    void getData(int a1)
    {
        a=a1;
    }
    friend int function(A & obj1, B & obj2);
};
class B
{
    int b;
    public:
    void getData(int b1)
    {
        b=b1;
    }
    friend int function(A & obj1, B & obj2);
};
int function(A & obj1, B & obj2)
{
    int c;
    c=obj1.a+obj2.b;
    int average;
    average=c/2;
    if(obj1.a<obj2.b)
    {
        cout<<"a is smaller integer"<<endl;
    }
    else{
        cout<<"b is smaller integer"<<endl;

    }
}
int main(){
    A obj1;
    obj1.getData(10);
    B obj2;
    obj2.getData(20);
    function(obj1,obj2);
    return 0; 
}
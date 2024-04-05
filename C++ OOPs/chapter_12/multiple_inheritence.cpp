#include<iostream>
#include<cstdio>
using namespace std;

// Multiple Inheritence ==> Inheriting characterstics of the Parent classes

// Syntax for inheriting multilevel:
/*
class Derived : visibility_mode Base_1 , visibility_mode Base_2
{
    // Derived class code body
};

// Below program showing Multiple inheritence 
*/

class Base_1
{
    protected: 
        int base_1;
    public: 
        void set_value1(int a)
        {
            base_1=a;
        }
};
class Base_2
{
    protected: 
        int base_2;
    public: 
        void set_value2(int a)
        {
            base_2=a;
        }
};
class Base_3
{
    protected: 
        int base_3;
    public: 
        void set_value3(int a)
        {
            base_3=a;
        }
};

// Creaing a Inherited Deriverd class from Base_1, Base_2, Base_3 BASE clases

class Derived : public Base_1,public Base_2,public Base_3{
    public: 
    // Accessing the memebers of the Base classes
        void Display()
        {
            cout<<"The value of the Base 1 is "<<base_1<<endl;
            cout<<"The value of the Base 2 is "<<base_2<<endl;
            cout<<"The value of the Base 3 is "<<base_3<<endl;
            cout<<"The Sum of the values is "<<base_1+base_2+base_3<<endl;

        }
};
int main(){
    // Creating a object of the Derived class

    Derived der;
    der.set_value1(11);
    der.set_value2(12);
    der.set_value3(13);

    der.Display();

    return 0; 
}
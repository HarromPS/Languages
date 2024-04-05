#include <iostream>
#include <cstdio>
using namespace std;

// CONSTRUCTORS IN DERIVED CLASSES

/*
case 1 ==>
(Base class) class A
class B : public A{
    // Order of execution of constructor -> 1st A() then B()
};

case 2 ==>
(Base class) class B
(Base class) class C
class A : public B, public C{
    // A/c to order of apperance of declaration
    // Order of execution of constructor -> 1st B() then C() then A()
};

case 3 ==>
(Base class) class A
(Intermediate Base class) class B : public A{

};

class C : public B{
    // A/c to order of inheritence
    // Order of execution of constructor -> 1st A() then B() then C()
};

case 4 ==>
(Base class) class A
class B : public A{

};

class C : public B, virtual public A{
    // A/c to priority virtual -> 1, base -> 2, derived -> 3
    // Order of execution of constructor -> 1st A() then B() then C()
};

*/

class Base_1{
    int a;
public:
    Base_1(int i){
        a = i;
        cout<<"Base_1 class constructor is called"<<endl;
    }
    void printBase1(){
           cout<<"The value of a is "<<a<<endl;

    }
};

class Base_2{
    int b;
public:
    Base_2(int i){
        b = i;
        cout<<"Base_2 class constructor is called"<<endl;
    }
    void printBase2(){
           cout<<"The value of b is "<<b<<endl;

    }
};

// Order of apperance Base1 then Base2
class Derived : public Base_1, public Base_2 {

   int derived_1,derived_2;
   public: 

   // Calling the constructors of Base classes
   // Synatax :
   // Derived(int a, int b, int c, ,int d) : Base1(a), Base2(b)

        Derived(int a, int b, int c, int d) : Base_1(a), Base_2(b){
            derived_1=c;
            derived_2=d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printDerived(){
            cout<<"The value of derived 1 is "<<derived_1<<endl;
            cout<<"The value of derived 2 is "<<derived_2<<endl;
        }

};
class Derived2 : public Base_1, public Base_2 {

   int derived_3,derived_4;
   public: 

   // Calling the constructors of Base classes
   // Synatax :
   // Derived(int a, int b, int c, ,int d) : Base1(a), Base2(b)

        Derived2(int a, int b, int c, int d) : Base_1(a), Base_2(b){
            derived_3=c;
            derived_4=d;
            cout<<"Derived2 class constructor called"<<endl;
        }
        void printDerived(){
            cout<<"The value of derived 3 is "<<derived_3<<endl;
            cout<<"The value of derived 4 is "<<derived_4<<endl;
        }

};
int main(){
   // Creating a object of Derived class
   Derived obj(1,2,3,4);
   obj.printBase1();
   obj.printBase2();
   obj.printDerived();
   cout<<endl;
   Derived2 obj2(10,20,30,40);
   obj2.printBase1();
   obj2.printBase2();
   obj2.printDerived();

    return 0;
}
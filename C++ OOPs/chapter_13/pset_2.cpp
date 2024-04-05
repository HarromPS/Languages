#include <iostream>
#include <cstdio>
using namespace std;

// CONSTRUCTORS IN DERIVED CLASSES

class Base_1{
    int a;
public:
    Base_1(){};
    Base_1(int i){
        a = i;
        cout<<"Base_1 class constructor is called"<<endl;
    }
    void printBase1(){
           cout<<"The value of a is "<<a<<endl;

    }
};

class intermediate_Base_2 : public virtual Base_1{
    int b;
public:
    intermediate_Base_2(){};
    intermediate_Base_2(int i){
        b = i;
        cout<<"intermediate_Base_2 class constructor is called"<<endl;
    }
    void printintermediate_Base_2(){
           cout<<"The value of b is "<<b<<endl;

    }
};

// Order of apperance virtual class then Base2
class Derived : public intermediate_Base_2 {

   int derived_1,derived_2;
   public: 

   // Calling the constructors of Base classes
   // Synatax :
   // Derived(int a, int b, int c, ,int d) : Base1(a), Base2(b)

        Derived(int a, int b, int c, int d) : Base_1(a), intermediate_Base_2(b){
            derived_1=c;
            derived_2=d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printDerived(){
            cout<<"The value of derived 1 is "<<derived_1<<endl;
            cout<<"The value of derived 2 is "<<derived_2<<endl;
        }

};
class Derived2 : public intermediate_Base_2 {

   int derived_3,derived_4;
   public: 

   // Calling the constructors of Base classes
   // Synatax :
   // Derived(int a, int b, int c, ,int d) : Base1(a), Base2(b)

        Derived2(int a, int b, int c, int d) : Base_1(a),intermediate_Base_2(b){
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
   // Creating a Derived class object
   Derived obj(1,2,3,4);
   obj.printBase1();
   obj.printintermediate_Base_2();
   obj.printDerived();
   cout<<endl;
   Derived2 obj2(11,12,13,14);
   obj2.printBase1();
   obj2.printintermediate_Base_2();
   obj2.printDerived();
    return 0;
}


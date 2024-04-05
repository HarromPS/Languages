#include <iostream>
#include <cstdio>
using namespace std;

// OOPs Practical 03
// Q2. WAP to find max of two numbers using friend function.
// Here one memb. of one class and other is memb. of another

// Forward declaration
class A;
class B{
    int first_no;
public:
    void setdata1(int a){
        first_no = a;
    }
    void display(){
        cout << first_no;
    }

    int compare(A, B);
};
class A{
    int second_no;
    // declaring compare function as a friend of class A
    friend int B ::compare(A, B);
public:
    void setdata(int b){
        second_no = b;
    }
    void display1(){
        cout << second_no << endl;
    }
};
// taking the argument of two classes
int B ::compare(A obj, B obj2){
    if (obj.second_no > obj2.first_no){
        cout <<endl<< obj.second_no << " is greater than " << obj2.first_no << endl;
    }
    else{
        cout <<endl<< obj.second_no << " is smaller than " << obj2.first_no << endl;
    }
}
int main(){
    A obj;
    obj.setdata(100);   // object to set data of 1st number
    B obj2, compare_1;
    obj2.setdata1(20);  // object to set data of 2nd number
    cout << "The first number is: ";
    obj.display1();
    cout << "The second number is: ";
    obj2.display();
    compare_1.compare(obj, obj2);
    return 0;
}
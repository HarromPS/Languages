#include <iostream>
#include <cstdlib>
using namespace std;

// Q13. Write a program to overload new/delete operators in a class.
class myClass
{
public:
    string name;
    int age;
    myClass() {}
    myClass(string name,int age);
    void *operator new(size_t size);
    void operator delete(void *p);
    void Display();
};
myClass:: myClass(string name ,int age)
{
    this->name=name;
    this->age=age;
}
void *myClass ::operator new(size_t size)
{
    cout << "Overloading new operator with size: " << size << endl;
    void *p = ::operator new(size);
    // void *p = malloc(size);//    will also work fine
    return p;
}
void myClass ::operator delete(void *p)
{
    free(p);
}
void myClass::Display()
{
    cout<<"The name is: "<<name<<endl;
    cout<<"The age is: "<<age<<endl;
}
int main()
{
    int age;
    string name;
    cout << "Enter the age of a student in your class: ";
    cin >> age;
    cout << "Enter the name of a student in your class: ";
    cin >> name;
    myClass *p=new myClass(name,age);   
    p->Display();
    delete(p);

    return 0;
}
// #include<iostream>
// #include<stdlib.h>

// using namespace std;
// class student
// {
//     string name;
//     int age;
// public:
//     student()
//     {
//         cout<< "Constructor is called\n" ;
//     }
//     student(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }
//     void display()
//     {
//         cout<< "Name:" << name << endl;
//         cout<< "Age:" << age << endl;
//     }
//     void * operator new(size_t size)
//     {
//         cout<< "Overloading new operator with size: " << size << endl;
//         void * p = ::operator new(size);
//         //void * p = malloc(size); will also work fine

//         return p;
//     }

//     void operator delete(void * p)
//     {
//         cout<< "Overloading delete operator " << endl;
//         free(p);
//     }
// };

// int main()
// {
//     student * p = new student("Yash", 24);

//     p->display();
//     delete p;
// }
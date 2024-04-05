#include <iostream>
#include <cstdio>
using namespace std;

// Derived Class Syntax:
/*
    class derived-class-name : visibility-mode base-class-name

    // class -> keyword
    // derived-class name -> name of the derived class
    // (semicolon) : -> represents that derived class is derived from base class
    // visibity-mode -> whether the features of the base class is derived
    // publicily or privately
    // if visiblity is public : base class - public memb.==> derived class - public
    // if visiblity is private : base class - public memb.==> derived class - private

    // Default Visibllity Mode is ==> Private

    // base class -> name of the base class
*/

// Base Class
class Employee
{
    int id;
    float salary;

public:
    int x;
    Employee() {} // Default constructor required for derived class
    Employee(int x, float sal)
    {
        id = x;
        salary = sal;
    }
    void Display()
    {
        cout << "The ID of the Employee is " << id << endl;
        cout << "The Salary of the Employee is " << salary << endl;
    }
};

// Creating a Derived class Programer from Base class Employee
class Programmer : private Employee // Default visiblility mode is private
{
public:
    int lang = 30;
    Programmer(int id2)
    {
        // id=id2;     // is not accessible because it is a private member of the base class

        // x is accessible because it is a public member of base class
        x = id2;
    }
    void getData()
    {
        // cout<<"The ID is "<<id<<endl;   // is not accessible because it is a private member of the base class

        // x is accessible because it is a public member of base class
        cout << "The ID is " << x << endl;
    }
};
// class Programmer : public Employee // visiblility mode is public
// {
// public:
//     int lang = 30;
//     Programmer(int id2)
//     {
//         // id=id2;     // is not accessible because it is a private member of the base class

//         // x is accessible because it is a public member of base class
//         x = id2;
//     }
//     void getData()
//     {
        // cout<<"The ID is "<<id<<endl;   // is not accessible because it is a private member of the base class

//         // x is accessible because it is a public member of base class
//         cout << "The ID is " << x << endl;
//     }
// };

int main()
{

    Employee Aman(10, 200), Shubham(11, 202);
    Aman.Display();
    cout << endl;
    Shubham.Display();

    Programmer Raja(10);
    cout << endl;
    Raja.getData();
    cout << "The languages Raja knows is " << Raja.lang << " languages" << endl;

    // Programmer class has visiblity private so base class public memb are private for Programer class
    // cout<<Raja.x<<endl;

    return 0;
}
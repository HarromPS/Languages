#include <iostream>
#include <cstdio>
using namespace std;

// Class and access specifiers

class Employee
{
    // if you don't specify any access specifier then the members declared are under
    // private region...
private:
    int salary; // such terms are private for a employee
    int bank_id;
    int ac_no;

public:
    int mob_no; // such terms public for a employee
    int car_no; // We can access public members anywhere

    // To access private content make a method in public region
    // e.g

    // setting the variables means providing values to private memmbers
    // setData is declared as it receives 3 arguments
    void setData(int a1, int a2, int a3);

    // getData function/method print outs the values of data which is set
    // of private region
    void getData()
    {
        cout << "The salary is " << salary << endl;
        cout << "The bank id is " << bank_id << endl;
        cout << "The acc no is " << ac_no << endl;
        cout << "The mob no is " << mob_no << endl;
        cout << "The car no is " << car_no << endl;
    }
};

// To define a function outside a class
// Syntax:
// return type class_name :: method_name(parameters).

void Employee ::setData(int a1, int a2, int a3)
{
    salary = a1;
    bank_id = a2;
    ac_no = a3;
}
int main()
{

    Employee raj; // object of class employee
    raj.mob_no = 1234;
    raj.car_no = 89;

    // raj.bank_id=10;     // wil throw error

    raj.setData(1200, 1212, 9764); // passing arguments to the function

    raj.getData();

    return 0;
}
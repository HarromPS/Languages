#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

// Array of objects
class company
{
    int age;
    int Id;
    int salary;

public:
    void setdata(void)
    {
        cout << "Enter the Id of employee: " << endl;
        cin >> Id;
        cout << "Enter the Age of employee: " << endl;
        cin >> age;
        cout << "Enter the Salary of employee: " << endl;
        cin >> salary;
    }
    void getdata(void)
    {
        cout << "The Id of employee is: " << Id << endl;
        cout << "The Age of employee is: " << age << endl;
        cout << "The Salary of employee is: " << salary << endl;
    }
};
int main()
{

    // Creating an array of objects under one name
    // class name var_name[size];    ==> syntax of a datatype

    company employee[2];

    // calling the functions
    for (int i = 0; i < 2; i++)
    {

        employee[i].setdata();
        employee[i].getdata();
    }
    return 0;
}
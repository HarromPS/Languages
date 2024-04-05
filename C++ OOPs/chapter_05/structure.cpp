#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

// STRUCTURE AND REFERENCE

struct class_name
{             // class data type created
    int no;   // member (int) no
    string a; // member (string) a
};

struct employee // user defined datatype
{
    int eId; // datatype variables
    string favchar;
    float salary;
};
int main()
{
    struct class_name object;
    object.no = 10;             // initializing and accessing member using object variable
    object.a = {"Hello World"}; // initializing and accessing member using object variable
                                // initialise as a string
    cout << "The value of the member no is: " << object.no << endl;
    cout << "The value of the member a is: " << object.a << endl
         << endl;

    // multiple variables
    struct class_name object2;
    object2.no = 20;
    object2.a = {"New World!"};

    cout << "The value of new member no is:" << object2.no << endl;
    cout << "The value of new member a is:" << object2.a << endl;

    // REFERENCE
    // like a pointer, but by using '&' operator
    // e.g

    string food = "Apple"; // string stores Apple
    string &fruit = food;  // "&fruit" is pointing or refering food

    // see the output

    cout << "The string food= " << food << endl;
    cout << "The refernce to food is= " << fruit << endl
         << endl;

    // will display address where food is stored
    cout << "The address of food is= " << &fruit << endl;

    employee Amit; // datatype variable or can say employee

    // initializing values of variables of emplyee Amit

    Amit.eId = 1234;        // Amit's id
    Amit.favchar = "AJ";    // Amit's Favorite character
    Amit.salary = 12000.89; // Amit's salary

    cout << "Amit's id: " << Amit.eId << endl;
    cout << "Amit's Favorite character: " << Amit.favchar << endl;
    cout << "Amit's salary: " << Amit.salary << endl;

    return 0;
}

#include <iostream>
#include <cstdio>
using namespace std;

// Creating methods==>functions of the class

// INSIDE THE CLASS
class employee // class and class_name declared
{
public: // under public access specifier
    string name;
    void display(/* parameters */) // declared and defined the method inside the class under public access specifier
    {
        cout << "\nShowing 'Hello World' from inside method" << endl;

        // using 'this->' to access name attribute for display method
        cout << "Showing name using 'this->' " << this->name << endl;
        // this->name replaced with employee_name.name
    }
};

// OUTSIDE THE CLASS
class employee2 // class and class_name declared
{
public:        
    string name;                 // under public access specifier
    void show(/* parameters */); // declared the method inside the class
                                // and will be defined outside the class
};

// Defining the void show method outside the class
// return_type class_name::method_name(){
// .....statements...;
//}

void employee2::show(/* parameters */)
{
    cout << "Showing 'New Hello World' from outside method\n"
         << endl;
}

int main()
{
    employee e1; // object of employee class declared
    // e1.display();

    // Accessing/Calling the method for e1

    e1.display(/* passing arguments */); // called display method for e1 object only
                                         // will display Hello World

    employee2 e2;

    e2.show(); // called show method for e2 object only
                                     // will show New Hello World

    employee employee_name; // another object for class employee
    employee_name.name = "Amit";

    // Accessing by calling method

    employee_name.display(/*argument*/);

    return 0;
}
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

// Construnctors
class employee
{
public: // e.g. bank is access by everyone
        // under public access specifier can be accessed everywhere
    int a;
    string name;

    // use different parameter name to identify the parameters are from class object
    employee(string name, int a, int secpass) // constructor of class employee with 2 parameters
                                              // when a object is created of the class employee
                                              // then automatically this function will run==> constructor
    {
        this->name = name;
        this->a = a;
        this->secpass = secpass; // already set or initialized
    }

    void display()
    {
        cout << this->name << " & " << this->a;
        // cout<<"\n The secret password is "<<this.secpass<<endl;
    }

    // creating method to access the private content
    void getpassword()
    {
        cout << "\nThe secret password is: " << this->secpass << endl;
    }

private:         // private cannot be accessed until we use
                 //  'public method inside class only'
                 // i.e public access specifier as a function to take access of private
    int secpass; // passing this into the constructor
};
int main()
{
    employee obj("Hello World from constructor", 10, 123); // passing arguments to the construtor
                                                           // also contains private argumnent

    obj.display();
    obj.getpassword(); // calling the method to see the private content
    // will show that this is a private within content cannot be accessed
    // cout << "\n The secret password is " << obj.secpass << endl;

    // Private can be accessed within the class using functions/methods.

    return 0;
}
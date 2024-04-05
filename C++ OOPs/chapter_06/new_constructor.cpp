#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

// Construnctors
class employee
{
public:
    int a;
    string name;

    // use different parameter name to identify the parameters are from class object
    employee(string name, int a) // constructor of class employee with 2 parameters
                                 // when a object is created of the class employee
                                 // then automatically this function will run==> constructor
    {
        this->name = name;
        this->a = a;
    }

    void display()
    {
        cout << this->name << " & " << this->a;
    }
};
int main()
{
    employee obj("Hello World from constructor", 10); // passing arguments to the construtor

    obj.display();

    return 0;
}
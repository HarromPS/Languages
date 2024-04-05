#include <iostream>
#include <cstdio>
using namespace std;

// PARAMETERS IN CONSTRUCTRS
class this_is_a_class_name // class & class name declared
{
public: // access specifier declared
    // creating constructor, syntax:
    // class_name (/* parameters */) {
    //  .... statements...; }
    string name;
    int a;

    // this is a consrtructor ==>
    this_is_a_class_name(string x, int y) // constructors with parameters
    {                                     //("Hello",10)
        name = x;                         // initializing parameters with attribute name
        a = y;                            // initializing parameters with attribute a
    }
};
int main()
{
    this_is_a_class_name object("Hello", 10); // passing arguments in constructor

    // Accessing the attribute values for object using constructor

    cout<<"The name initialized is: "<<object.name<<endl;   // acessing initialized attributes 
    cout<<"The number initialized is: "<<object.a<<endl;


    return 0;
}


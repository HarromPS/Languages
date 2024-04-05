#include <iostream>
#include <cstdio>
using namespace std;

// CONSTRUCTORS OUTSIDE

class this_is_a_class_name // class & class name declared
{
public: // access specifier declared
    // creating constructor, syntax:
    // class_name (/* parameters */) {
    //  .... statements...; }

    this_is_a_class_name(/* parameters */); // constructor declared inside class
};

this_is_a_class_name::this_is_a_class_name(/* parameters */)
{
    cout << "Hello World from outside" << endl;
}
int main()
{
    this_is_a_class_name object;    // constructor called when obj is created

    return 0;
}
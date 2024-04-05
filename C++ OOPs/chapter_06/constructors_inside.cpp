#include <iostream>
#include <cstdio>
using namespace std;

// CONSTRUCTORS
// INSIDE

class this_is_a_class_name // class & class name declared
{
public: // access specifier declared
    // creating constructor, syntax:
    // class_name (/* parameters */) {
    //  .... statements...; }

    this_is_a_class_name(/* parameters */)  // parameters here are different from class variables
    {
        cout<<"Hello World from inside"<<endl;
    }

};
int main()
{
    this_is_a_class_name obj;   // calling the constructor when obj is created

    // Constructors can take parameters as arguments
    return 0;
}
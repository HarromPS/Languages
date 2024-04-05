#include <iostream>
// #include <cstdio>
using namespace std;

// DESTRUCTORS
// ==> Destructors neither takes arguments nor returns a value
// ==> invoked implicitly by compiler, when
// - whenever program exits or block of code is exit
// - so to clean up the storage compiler automatically calls it implicitly

int count=0;
// static variable ==> preserve their values even after they are out of scope
// count updates after increment

class num
{
public:
    // Declared a Constructor Function
    num();

    // Declared a Destructor Function
    // using " ~ " tidle operator
    ~num()
    {
        cout<<"Destuctor Function called for object number "<<count<<endl;
        cout<<"And the object is destroyed"<<endl;
        count--;
    }
};

num ::num() // except friend function all member functions uses
            // " :: " scope resolution operator
{
    count++;
    cout << "Constructor Function called for object number " << count << endl;
}
int main()
{
    cout<<"We are in main function "<<endl;
    cout<<"Creating object obj1"<<endl;

    num obj1;

    // Creating a block of code 
    {
        cout<<"Entered the Block\nCreating more objects"<<endl;
        num obj2, obj3;
        cout<<"Exiting the Block"<<endl;
    }
    // WHEN EXITING THE BLOCK OBJECTS ARE NOT IN USE ANYMORE 
    // SO DESTRUCTOR FUNCTION IS CALLED BY COMPILER AND OBJECTS ARE DESTROYED
    // AUTOMATICALLY

    cout<<"Back to main function"<<endl;
    // After checking obj1 is not in use destructor is again called by compiler
    
    return 0;
}
#include <iostream>
#include <cstdio>
using namespace std;

// PARMAETERS IN METHODS

class this_is_a_class_name // class & class name declared
{
public:               // access specifier
    int speed(int sp) // parameter(int sp) inside int speed method
    {
        return sp;
    }
};

int main()
{
    this_is_a_class_name object; // object declared of class this_is_a_class_name

    // printing the value

    cout << object.speed(200) << endl; // calling method by passing 100 as an argument in method speed

    return 0;
}
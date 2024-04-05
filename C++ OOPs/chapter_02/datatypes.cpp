#include <iostream>
using namespace std;
// DATATYPES

int main()
{
    // types if integer datatypes

    short a;     // as seen from their names short is for small numbers
    int b;       // int for normal/regular numbers
    long c;      // for long numbers
    long long d; // for more long numbers

    cout << "size of 'short' datatype: " << sizeof(a);
    cout << "\nsize of 'int' datatype: " << sizeof(b);
    cout << "\nsize of 'long' datatype: " << sizeof(c);
    cout << "\nsize of 'long long' datatype: " << sizeof(d)<<endl;

    // bool - value is true/false
    //      - default value is false
    bool x;
    if (!x)
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "true" << endl;
    }
    float score = 54.82;

    // In C++ we can reassign/reinitialize the values of the variables
    // for example

    score = 100.99; // now the new value of score will be printed

    cout << "\nThe new score is: " << score << endl;

    // when some values are required always to be same
    // then we initialize variables as a constant

    // assignment of read only variable
    // can be useful when using values which should not change due to any reason
    // like birthdate, salary, event date, etc.

    int const abc = 10; // we have to initialize the vaiable otherwise
                        // it will show error

    // abc=20;         // if we try to reinitialize the constant value it will
    // show error

    cout << "The constant value is:" << abc << endl;
    printf("The constant value is:%d\n", abc);
    return 0;
}

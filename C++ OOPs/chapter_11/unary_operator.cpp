#include <iostream>
#include <cstdio>
using namespace std;

// Unary operator ==> operator which works for single operator
// Syntax:
/*
    for defining the operator function (inside the class)
    return_type operator op (arguments)

    for calling/invoking
    op X

    where; X is a object of the class
           op is a operator of user defined type
*/

class Space
{
private:
    int x, y, z;
    // Making Unary function a friend of the class
    friend int operator++(Space &);

public:
    void getData(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void Display()
    {
        cout << "x= " << x << endl;
        cout << "y= " << y << endl;
        cout << "z= " << z << endl;
    }

    // Creating a unary operator overloading function
    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};

// Through the Friend Function
// Defining unary function using friend function
int operator++(Space &S)
{
    S.x = ++S.x;
    S.y = ++S.y;
    S.z = ++S.z;
}
int main()
{
    // Class object
    Space S;
    cout << "Before Unary call " << endl;
    S.getData(10, 20, -30);
    S.Display();

    // Calling the unary operator function
    -S; // S2 = -S1; ==> Will work if the function returns

    cout << "After Unary call " << endl;
    S.Display(); // -10, -20, 30

    // Calling the Friend unary operator function
    ++S; // S2 = -S1; ==> Will work if the function returns

    cout << "After Friend Unary call " << endl;
    S.Display(); // -9, -19, 31

    return 0;
}
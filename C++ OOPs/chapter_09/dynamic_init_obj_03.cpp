#include <iostream>
#include <cstdio>
using namespace std;

// Dynamic initialization(initialization at run time) of objects using Constructors
// Let us take an example of bank deposit and interest on principal amount

// Creating a class
class BankDeposit
{
    int principal;
    int years;
    float interest_rate;
    float return_value;

public:
    // if we are not passing any argument so this constructor gets invoked
    // with garbage values
    BankDeposit() {} // Takes nothing

    BankDeposit(int p, int y, float rate); // takes principal, yrs, rate in float
    BankDeposit(int p, int y, int rate);   // takes principal, yrs, rate in int

    // Creating a show method to display the assigned members
    // & to display the return value of the principal
    void show(void);
};

// Defining all methods
BankDeposit ::BankDeposit(int p, int y, float rate)
{
    principal = p;
    years = y;
    interest_rate = rate;

    // return value is calculated as
    return_value = principal;
    for (int i = 0; i < y; i++)
    {
        // return value = principal * rate * time
        return_value = return_value * (interest_rate + 1); // rate is a floating value
    }
}

// Both methods are same except the rate parameter
// Above it is in flaot & here it is in int
BankDeposit ::BankDeposit(int p, int y, int rate)
{
    principal = p;
    years = y;
    // Type casting the int rate into flaot for the same result
    interest_rate = (float)rate / 100;

    // return value is calculated as
    return_value = principal;
    for (int i = 0; i < y; i++)
    {
        // return value = principal * rate * time
        return_value = return_value * (1 + interest_rate); // rate is a floating value
    }
}

void BankDeposit ::show()
{
    cout << "The principal was " << principal << " ";
    cout << "& return value after " << years << " ";
    cout << "years is " << return_value << endl;
}
int main()
{
    // objects created like
    // int a,b,c
    BankDeposit obj1, obj2, obj3;

    int p, y, R;
    float r;
    cout << "Enter Principal, Years, Interest rate" << endl;
    cin >> p >> y >> r;

    // Gives garbage value ==> consructor with no parameters
    // obj3 = BankDeposit();
    // obj3.show();

    // a = function call
    obj1 = BankDeposit(p, y, r);
    obj1.show();

    cout << "Enter Principal, Years, Interest Rate" << endl;
    cin >> p >> y >> R;
    cout << endl;
    // b = function call
    obj2 = BankDeposit(p, y, R);
    obj2.show();

    return 0;
}

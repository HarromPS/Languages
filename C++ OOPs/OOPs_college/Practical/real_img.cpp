#include <iostream>
#include <cstdio>
using namespace std;

// Addition of real & imaginary numbers using class

// Creating a class of Complex nos.
class complex
{
    int real;
    int imaginary;

public:
    void setvalues(void);
    void displayvalues(void);
};

// setting the values of the real part and the imaginery parts of the complex nos.
void complex ::setvalues(void)
{
    cout << "Enter the real part: " << endl;
    cin >> real;
    cout << "Enter the imaginary part :" << endl;
    cin >> imaginary;
}

// Adding up the real & imaginary parts
void complex ::displayvalues(void)
{
    // int add=0;
    // add=real+imaginary;
    cout << "The complex mumber obtained is: " << real << " + " << imaginary << "i " << endl;
    cout << "where ; 'i' stands for iota" << endl;
}
int main()
{

    // Creating a object to access the class members
    complex equation;

    equation.setvalues();
    equation.displayvalues();

    return 0;
}
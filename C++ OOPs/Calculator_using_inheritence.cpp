#include <iostream>
#include <cstdio>   // stdio.h
#include <cmath>    // math.h
using namespace std;

// Exercise (questions on last line)

// Simple calculator class
class SimpleCalculator
{
protected:
    int a, b;

public:
    void getvalues(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void display_simple_result()
    {
        cout << endl;
        cout << "a + b = " << a + b << endl;
        cout << "a - b = " << a - b << endl;
        cout << "a * b = " << a * b << endl;
        cout << "a / b = " << (float)a / b << endl;
    }
    void Display();
};
void SimpleCalculator::Display()
{
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
}

// Scientific calculator class
class ScientificCalculator : virtual public SimpleCalculator
{
public:
    void display_scientific_result()
    {
        cout << endl;
        cout << "sin(a + b) = " << sin(a + b) << endl;
        cout << "cos(a - b) = " << cos(a - b) << endl;
        cout << "sqrt(a * b) = " << sqrt(a * b) << endl;
        cout << "square(a + b) = " << ((a + b) * (a + b)) << endl;
    }
};

// There is still Ambiguity (SimpleCal ==> SciCal)
/*
    SimlpleCal ---  }   HybridCal protected & public memebers of Simple Cal
    SciCal     ---  }

    are inherited in Hybrid class twice == > introduced Ambiguity
    :: Solution is Virtual Base Class
*/

class HybridCalculator : /*public SimpleCalculator,*/ public ScientificCalculator
{
public:
    void Display_Data()
    {
        ScientificCalculator::Display();
        ScientificCalculator::display_simple_result();
        display_scientific_result();
    }
};
int main()
{
    int num1, num2;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;

    HybridCalculator Maths;
    Maths.ScientificCalculator::getvalues(num1, num2);
    Maths.Display_Data();

    return 0;
}


/*
Create 2 classes:
    1. SimpleCalculator - Takes user input of 2 number using a utility function & performs +, -, *, / operations & display using another function.
    2. ScientificCalculator - Takes user input of 2 number using a utility function & performs any four operations of your own choice & display using another function.

    Create another class HybridCalculator & inherit using the above two classes:
    Q1) What type of Inheritence you are using ?
    Ans==> Multiple Inheritence

    Q2) Which mode of Inheritence you are using ?
    Ans==> public

    Q3) Create an object of HyridCalculator & display result of simple & scientific calculator.
    Q4) How is code reusability implemented ?
    Ans==> Using the variables & functions of the base classes.

*/
#include <iostream>
#include <cstdio> // stdio.h
#include <cmath>  // math.h
using namespace std;

// Simple calculator class
class SimpleCalculator
{
protected:
    int num1, b;

public:
    void getvalues()
    {
        cout << "Enter values for simple calculations " << endl;
        cout << "Enter 1st number: ";
        cin >> num1;
        cout << "Enter 2nd number: ";
        cin >> b;
    }
    void display_simple_result()
    {
        cout << endl;
        cout << num1 << " + " << b << " = " << num1 + b << endl;
        cout << num1 << " - " << b << " = " << num1 - b << endl;
        cout << num1 << " * " << b << " = " << num1 * b << endl;
        cout << num1 << " / " << b << " = " << (float)num1 / b << endl;
    }
    void Display();
};
void SimpleCalculator::Display()
{
    cout << "A = " << num1 << endl;
    cout << "B = " << b << endl;
}

// Scientific calculator class
class ScientificCalculator : virtual public SimpleCalculator
{
protected:
    int num1, num2;

public:
    void getValues()
    {
        cout << endl
             << "Enter values for scientific calculations " << endl;
        cout << "Enter 1st number: ";
        cin >> num1;
        cout << "Enter 2nd number: ";
        cin >> num2;
    }
    void display_scientific_result()
    {
        cout << endl;
        cout << "cos(" << num1 << " - " << num2 << ") = " << cos(num1 - num2) << endl;
        cout << "sin(" << num1 << " + " << num2 << ") = " << sin(num1 + num2) << endl;
        cout << "sqrt(" << num1 << " * " << num2 << ") = " << sqrt(num1 * num2) << endl;
        cout << "square(" << num1 << " + " << num2 << ") = " << ((num1 + num2) * (num1 + num2)) << endl
             << endl;
    }
};

// There is still Ambiguity (SimpleCal ==> SciCal)
/*
    SimlpleCal ---  }   HybridCal protected & public memebers of Simple Cal
    SciCal     ---  }

    are inherited in Hybrid class twice == > introduced Ambiguity
    :: Solution is Virtual Base Class
*/

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};
int main()
{
    SimpleCalculator obj1;
    obj1.getvalues();
    obj1.display_simple_result();

    ScientificCalculator obj2;
    obj2.getValues();
    obj2.display_scientific_result();

    // HybridCalculator Maths;
    // // Maths.ScientificCalculator::getvalues(num1, num2);
    // Maths.Display_Data();

    return 0;
}
/*
Create 2 classes:
    1. SimpleCalculator - Takes user input of 2 number using num1 utility function & performs +, -, *, / operations & display using another function.
    2. ScientificCalculator - Takes user input of 2 number using num1 utility function & performs any four operations of your own choice & display using another function.

    Create another class HybridCalculator & inherit using the above two classes:
    Q1) What type of Inheritence you are using ?
    Ans==> Multiple Inheritence

    Q2) Which mode of Inheritence you are using ?
    Ans==> public SimpleCalculator, public ScientificCalculator

    Q3) Create an object of HyridCalculator & display result of simple & scientific calculator.
    Q4) How is code reusability implemented ?
    Ans==> Using the variables & functions of the base classes.

*/
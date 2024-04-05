#include <iostream>
#include <cstdio>
using namespace std;

// if else statemests & ternary conditionals
int main()
{
        int age;
        cout << "Enter your age " << endl;
        cin >> age;

        if (age > 120 && age<18)
        {
                cout << "Invalid age" 
                     << endl;
        }

        else if (age >= 18)
        {
                cout << "You can vote"
                     << "\n";
        }

        else
        {
                cout << "You cannot vote"
                     << "\n";
        }

        // TERANRY CONDITIONALS

        int c;
        cout << endl
             << "Enter a value" << endl;
        cin >> c;
        int d = (c > 10) ? (c * 3) : (c * 6);
        cout << "The value of c is:" << d << endl;
        return 0;
}

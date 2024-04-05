#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "Your age is 12" << endl;
        break;

    case 13:
        cout << "Your age is 13" << endl;
        break;

    case 14:
        cout << "Your age is 14" << endl;
        break;

    default:
        cout << "Enter age between 12-14" << endl;
        break;  // optional
    }
    return 0;
}
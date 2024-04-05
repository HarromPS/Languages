#include <iostream>
#include <cstdio>
using namespace std;

// Base class
class Tailor
{
    // considering all his attributes are public
public:
    int skills;
    int experience;

    // Default Constructor Function
    Tailor() {}

    // creating constructor function
    Tailor(int sk, int exp)
    {
        skills = sk;
        experience = exp;
    }
    void Show()
    {
        cout << "Skills " << skills << endl;
        cout << "Experience " << experience << endl;
    }
};

// Creating a Derived class
class Businessman : public Tailor
{
public:
    float money_earned;
    int new_skills;
    int involved_time;

    // Default constuctor
    // Businessman(){}
    Businessman(float mo, int nsk, int invtime)
    {
        money_earned = mo;
        new_skills = nsk;
        involved_time = invtime;
    }
    void Show()
    {
        cout << "Money earned in " << involved_time << " years is " << money_earned << endl;
        cout << new_skills << "New skills learned in  " << involved_time << " years " << endl;
    }
};
int main()
{
    cout << "Enter how many skills do Ramesh's have " << endl;
    int sk, exp;
    cin >> sk;
    cout << "Enter how many years of experience do Ramesh's have " << endl;
    cin >> exp;
    Tailor Ramesh(sk, exp);
    Ramesh.Show();
    cout << endl;

    cout << "Enter how many New skills do Ramesh's learned " << endl;
    int nsk, time;
    float money;
    cin >> nsk;
    cout << "Enter how many years do Ramesh's put to built his business " << endl;
    cin >> time;
    cout << "Enter how many money do Ramesh earned from his business " << endl;
    cin >> money;
    Businessman newRamesh(money, nsk, time);
    newRamesh.Show();

    return 0;
}

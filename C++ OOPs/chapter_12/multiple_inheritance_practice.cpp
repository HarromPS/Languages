#include <iostream>
#include <cstdio>
using namespace std;

// In Multiple Inheritence We inherits the members & functions to a
// Derived class from Several Base classes and We can access the members using
// the objects of the Derived class.

// Creating two Base classes from which a Derived class is inherited

// 1st Parent class
class Mother
{
protected:
    int love_mother;
    int kindness;
    int compassion;

public:
    void Define_mother(int lm, int km, int cm)
    {
        love_mother = lm;
        kindness = km;
        compassion = cm;
    }
};

// 2nd Parent class
class Father
{
protected:
    int love_father;
    int courage;
    int _friend;

public:
    void Define_father(int lf, int cf, int ff)
    {
        love_father = lf;
        courage = cf;
        _friend = ff;
    }
};

// Child(Derived) class accessing all the memebers of Parent classes
class Child : public Mother, public Father
{
public:
    void Show()
    {
        cout << "I love my Mother " << love_mother << " times" << endl;
        cout << "I love my father " << love_father << " times" << endl;
        cout << "Mothers are so kind " << kindness << endl;
        cout << "Father gives us courage " << courage << endl;
        cout << "Mothers are so compassionate " << compassion << endl;
        cout << "Father is like our friend " << _friend << endl;
    }
};
int main()
{
    // Creating a object of the clild class missing his parents

    Child me;
    me.Define_mother(1000,100,100);
    me.Define_father(1000,100,100);
    me.Show();

    return 0;
}
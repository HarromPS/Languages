#include <iostream>
#include <cstdio>
using namespace std;

// Ambiguity in 'multiple inheitance; when function of 'same name'
// appears in more than one class

// Creating a Base1 class
class Base_1
{
public:
    void Display()
    {
        // One is calling in English
        cout << "Hello! How are you ?" << endl;
    }
};

// Creating a Base2 class
class Base_2
{
public:
    void Display()
    {
        // One is calling in Hindi
        cout << "Suno! Kaise Ho" << endl;
    }
};

// // Creating a Derived class from the two base classes
// class Derived : public Base_1,public Base_2
// {
//     public:
//      void Show()
//      {
//         Display();      // Which Base function's function is called is Ambigious
//         Display();
//      }
// };

// To solve the problem of ambiguity We use :: Scope Resolution Operator

class Derived : public Base_1, public Base_2
{
public:
    void Show()
    {
        cout<<endl;
        Base_1 ::Display();
        Base_2 ::Display();
    }
};
int main()
{

    Base_1 obj1;
    obj1.Display();     // Base classes are invoking their own member functions

    Base_2 obj2;
    obj2.Display();     // Base classes are invoking their own member functions

// Creating a Derived class object to Access the membre functions of the base classes
    Derived object;
    object.Show();

    return 0;
}

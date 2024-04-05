#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

class Person
{
    string name;
    float age;

public:
    Person(string s, float a)
    {
        name=s;
        age = a;
    }
    Person &greater(Person &obj)
    {
        if (obj.age >= age)
        {
            return obj;
        }
        else
        {
            return *this;
        }
    }
    void Display()
    {
        cout << "Name: " << name << endl<<"Age: " << age << endl;
    }
};
int main()
{
    Person P1("Virat",35);
    Person P2("Hardik",24);
    Person P3("Rohit",40);

    // Comparing two persons
    Person P=P1.greater(P2);
    cout<<"Elder Person is: "<<endl;
    P.Display();

    P=P1.greater(P3);
    cout<<endl<<"Elder Person is: "<<endl;
    P.Display();
    return 0;
}
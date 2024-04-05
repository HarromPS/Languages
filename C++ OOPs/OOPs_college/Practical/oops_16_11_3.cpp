#include <iostream>
#include <cstdio>
using namespace std;

// Q17. Write a program to maintain the records of a person with details
// (Name & Age) and find the eldest among them. The program must use this pointer
// to return the result.
class Person
{
public:
    string name;
    int age;

public:
    Person() {}
    void getData(string N, int age)
    {
        this->name = N;
        this->age = age;
        // return *this;// will give error as constructor does not have any return type
    }

    // Function to compare the ages of all the persons
    int Eldest(Person *, int);
};
int Person::Eldest(Person obj[], int size)
{
    int eldest = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (obj[i].age < obj[j].age)
            {
                obj[i].age = obj[j].age;
            }
        }
    }
    return this->age;
}
int main()
{
    int n;
    cout << "Enter the number of people present: ";
    cin >> n;
    Person P[n];
    cout << "Enter the details" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\nName of " << i + 1 << " person: ";
        cin >> P[i].name;
        cout << "Age of " << i + 1 << " person: ";
        cin >> P[i].age;
    }
    int eldest = P->Eldest(P, n);
    cout << "The eldest among all the persons is " << eldest << " years old" << endl;

    return 0;
}
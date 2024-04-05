#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

typedef struct employee // type gives your structure an alias
{
    int eId;
    string friends;
    float salary;
} emp; // here, 'emp' will replace struct employee
int main()
{
    emp Aman;             // can use alias
    struct employee Ajay; // Or can use struct employee

    Aman.eId = 123;          // Aman's id
    Aman.friends = "Ajay";   // Aman's friend
    Aman.salary = 1212.1212; // Aman; salary

    Ajay.eId = 123;          // Ajay's id
    Ajay.friends = "Ajay";   // Ajay's friend
    Ajay.salary = 1212.1212; // Ajay; salary

    cout << "The Id of Aman is: " << Aman.eId << endl;
    cout << "The Aman's friend is: " << Aman.friends << endl;
    cout << "The saalry Aman is: " << Aman.salary << endl<<endl;

    cout << "The Id of Ajay is: " << Ajay.eId << endl;
    cout << "The Ajay's friend is: " << Ajay.friends << endl;
    cout << "The saalry Ajay is: " << Ajay.salary << endl;

    return 0;
}
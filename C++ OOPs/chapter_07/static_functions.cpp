#include <iostream>
#include <cstdio>
using namespace std;

// Static functions
class employee
{
    int id;
    // declaring a variable as static
    // default value 0
    static int count;

public:
    void setdata(void);
    void getdata(void);
};
void employee ::setdata(void)
{
    cout << "Enter the Id of the employee: " << endl;
    cin >> id;
    count++; // value is 1 for the class
}
void employee ::getdata(void)
{

    cout << "The Id of the employee number " << count << " is: " << id << endl;
}

// Creating a static variable of the class outside
// it is a variable not a method so no { } braces

// COUNT is a static data member of class employee
int employee ::count; // default count is 0

int main()
{

    employee abhi;

    // will work for n employees
    for (int i = 0; i < 3; i++)
    {
        abhi.setdata();
        abhi.getdata();
    }
    return 0;
}
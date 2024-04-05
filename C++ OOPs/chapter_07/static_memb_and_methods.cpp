#include <iostream>
#include <cstdio>
using namespace std;

// Static data members & static functions
// Static members have only accesss to only ststic members & functions
class employee
{
    int id;
    // declaring a variable as static
    // whose default value 0
    static int count;

public:
    void setdata(void);
    void getdata(void);

    // GETCOUNT is a static functon
    // Creating a static function of class 'INSIDE the class'
    //  static return_type method_name(/* parameters */){  //code  }

    // this function can access the static members
    static void getcount(void)
    {
        // cout<<id;    // will show error
        cout << "Count is: " << count << endl;
    }
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
// We can initialize static variables here when declaring it as a class static
// member variable
int employee ::count = 100; // default count is 0
                            // will start count from 101

int main()
{

    employee abhi[3];

    // will work for n employees
    // for (int i = 0; i < 3; i++)
    // {
    //     abhi.setdata();
    //     abhi.getdata();
    //     employee ::getcount();
    // }

    abhi[0].setdata();
    abhi[0].getdata();
    employee ::getcount();  // used directly without any object

    abhi[1].setdata();
    abhi[1].getdata();
    employee ::getcount();

    abhi[2].setdata();
    abhi[2].getdata();
    employee ::getcount();
    return 0;
}
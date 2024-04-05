#include <iostream>
#include <cstdio>
using namespace std;

struct emp
{
    int a;   // for e.g a take 4 bites
    char c;  // for e.g c take 1 bites
    float d; // for e.g d take 4 bites
             // Total 9 bites are in use
};
// UNION IN C++
union money // it is like structure but is
            // better in memory management in C++
            // this feature in C++ ca be used with the help of UNION
{
    int rice;     // for e.g rice take 4 bites
    char car;     // for e.g car take 1 bites
    float pounds; // for e.g pounds take 4 bites

    // In union it allocates memory of maximum of datatype
    // here float & int takes 4 bites so will allocate
    // 4 bites for all variables to use at a time

    // for e.g if using rice= 10 4 bites will be used by int
    // when pounds= 12.12 then rice= 10 will get overwrited
    // and pounds will use 4 bites of data
};
int main()
{
    union money m1;
    m1.rice=20;         // will show garbage value for when printed
    m1.car='c';         // will show 'c' as proper output
                        // as value of rice is overwrited

    cout<<"The value provided is: "<<m1.rice<<endl;

    return 0;
}
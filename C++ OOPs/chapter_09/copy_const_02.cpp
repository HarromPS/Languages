#include <iostream>
#include <cstdio>
using namespace std;

class a
{
    int A;

public:
    a(int x) // Constructor Function
    {
        A = x;
        cout << "A = " << A << endl;
    }
    // Copy constructor
    // mimics the previous objects & called functions
    a(a & obj)      // taking reference of the previous object of the class
    {

        A=obj.A;    // A become = A of obj
                    // means A of obj_2 == A of object = 10
        
                    // A become = A of obj
                    // means A of obj_3 == A of obj_2 = 10
    }
};
int main()
{
    a object(10);
    a obj_2=object;
        // OR
    a obj_3(obj_2); // object mimics the obj_2 object


    return 0;
}
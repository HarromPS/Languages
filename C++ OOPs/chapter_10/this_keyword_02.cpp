#include <iostream>
#include <cstdio>
using namespace std;

class A
{
private:
    int a;

public:
    int setData(int a1)
    {
        //  BOTH ARE SAME
        a = a1;
        
        this->a = a1;   // Pointer of the class                    
    }

    void Display()
    {
        cout << "The number 'a' is " << a << endl;
    }
};

// Here class is a template and diferent objects are being created for the same class
// and every object will be calling the setData member function
// So object which has invoked/called the function is ==> "this"

// Here we are explicitly calling 'this' pointer
// elsewhere implicitly calling 'this' pointer
int main()
{
    A obj;
    obj.setData(10);
    obj.Display();

    return 0;
}
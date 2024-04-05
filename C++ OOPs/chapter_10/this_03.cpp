#include <iostream>
using namespace std;

class Test
{
private:
    int x;
    int y;

public:
    Test(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    Test &setX(int a)
    {
        x = a;

        // Now returning a object/ refernce/ address of the object
        return *this;
    }

    // The returned object is now used by other function ==> chain function calls
    Test &setY(int b)
    {
        y = b;
        return *this;
    }
    void print()
    {
        cout << "x = " << x << " y = " << y << endl;
    }
};

int main()
{
    Test obj1(5, 5);

    // Chain function calls. All calls modify the same object
    // as the same object is returned by reference

    obj1.setX(10).setY(20).print();
    
    Test result = obj1.setX(30);
    result.print();

    int a = 10;
    int &b = a;            // reference to int 'a'
    cout << a << endl;     // print 10
    cout << *(&b) << endl; // prints 10
    cout << b << endl;     // prints 10
    return 0;
}

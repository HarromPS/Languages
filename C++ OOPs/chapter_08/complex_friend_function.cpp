#include <iostream>
#include <cstdio>
using namespace std;

// Complex example of friend function

// forward declaration, prototype of the class 
class y;

// Creating a class
class x
{
    int private_data1;

    // statement that function swap is friend of mine
    // function is int type, name is swap which takes references of objects
    // of class x & y
    friend int swap(x &, y &);

public:
    void setdata(int a)
    {
        private_data1 = a;
    }
    void display(void)
    {
        cout << private_data1 << endl;
    }
};

class y
{
    int private_data2;

    // statement that function swap is friend of mine
    // function is int type, name is swap which takes references of objects
    // of class x & y
    friend int swap(x &, y &);

public:
    void setdata(int a)
    {
        private_data2 = a;
    }
    void display(void)
    {
        cout << private_data2 << endl;
    }
};

// Creating a friend function which will swap the values of the private data
// of both the classes

// I will be using call by reference to change their values using reference

int swap(x &o1, y &o2) // parameters of class x & y
{
    int temp = 0;
    temp = o1.private_data1;
    o1.private_data1 = o2.private_data2;
    o2.private_data2 = temp;
}
int main()
{

    x obj1;
    obj1.setdata(10);
    y obj2;
    obj2.setdata(20);

    cout << "The value of numbers before swap is \n";
    cout<<"x= "; obj1.display();
    cout<<"y= ";obj2.display();

    swap(obj1, obj2);

    cout << "The value of numbers after swap is \n";
    cout<<"x= ";obj1.display();
    cout<<"y= ";obj2.display();

    return 0;
}
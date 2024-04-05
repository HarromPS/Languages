#include <iostream>
#include <cstdio>
using namespace std;

// Multi-parameters template class
template <class T1,class T2,class T3>
class myClass
{
public:
    int x;
    float y;
    char z;
    void Display()
    {
        cout << "Value1: " << x << " Value: " << y << " Value3: " << z << endl;
    }
   myClass(T1 a,T2 b,T3 c)
   {
        x=a;
        y=b;
        this->z=c;
   }
    // Operator overloading in class
    myClass operator *(myClass &obj)
    {
        // Dot product the values of the two objects
        myClass objTemp;
        obj.Tempx += x * obj.x;
        return objTemp;
    }
};
int main()
{
    myClass <int,float,char>obj1(10,2.3,'a');
    obj1.Display();
    myClass <int,float,char>obj2(11,4.6,'b');
    obj2.Display();
    // myClass result=obj1+obj2;

    return 0;
}
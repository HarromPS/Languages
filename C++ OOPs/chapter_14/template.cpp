#include <iostream>
#include <cstdio>
using namespace std;

// for a class, template is a template
/*
--> used to create a family of classes or functions
--> considered as a kind of macro
--> when an object for a specific class is defined for actual use
    , the template defination for that class is substituted with the
    required data type.
--> used for DRY, generic(general) programming
*/

// Template class
template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int s)
    {
        size = s;
        arr = new T[size];
    }
    T DotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];   // this for calling object & v for other object
        }
        return d;
    }
};

// Normal class
class vector
{
public:
    int *arr;
    int size;
    vector(int s)
    {
        size = s;
        arr = new int[size];
    }
    int dotProduct(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];   // this for calling object & v for other object
        }
        return d;
    }
};
int main()
{
    float result;
    // for template classes 
    // using template types
    Vector <float>V1(3);
    V1.arr[0] = 5.8;
    V1.arr[1] = 3.8;
    V1.arr[2] = 2.3;

    Vector <float>V2(3);
    V2.arr[0] = 1.4;
    V2.arr[1] = 0.2;
    V2.arr[2] = 1;
    result=V1.DotProduct(V2);
    cout<<"The dot product is: "<<result<<endl;

    // for normal classes 
    vector v1(3);
    v1.arr[0] = 5;
    v1.arr[1] = 3;
    v1.arr[2] = 2;

    vector v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 2;
    v2.arr[2] = 1;
    result=v1.dotProduct(v2);
    cout<<"The dot product is: "<<result<<endl;

    return 0;
}
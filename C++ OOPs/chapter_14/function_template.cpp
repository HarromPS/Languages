#include <iostream>
#include <cstdio>
using namespace std;

// Function template is used to create family of functions
// with different arguments types just like class template

template <class T1, class T2>
float FunAvg3(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}

template<class T>
void Swap(T *a,T* b)
{
    T temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

// // Normal function creations
// float FunAvg1(int a, int b)
// {
//     float avg = (a + b) / 2;
//     return avg;
// }

// float FunAvg2(int a, float b)
// {
//     float avg = float(a + b) / 2.0;
//     return avg;
// }
int main()
{
    // float result = FunAvg1(10, 20);
    // printf("The avg of two numbers is: %.2f\n",result);

    // float result2 = FunAvg2(11, 21);
    // printf("The avg of two numbers is: %.2f\n",result2);

    int result1 = FunAvg3(11, 21);
    printf("The avg of two numbers is: %d\n", result1);

    float result2 = FunAvg3(1.1, 2.1);
    printf("The avg of two numbers is: %.2f\n", result2);

    double result3 = FunAvg3(11.2, 0.21);
    printf("The avg of two numbers is: %.2f\n", result3);

    // Another example is swap two dataypes
    int x = 10, y = 20;
    cout << "The numbers before swap: (" << x << ", " << y << ")" << endl;
    Swap(&x, &y);
    cout << "The numbers after swap: (" << x << ", " << y << ")" << endl;

    return 0;
}
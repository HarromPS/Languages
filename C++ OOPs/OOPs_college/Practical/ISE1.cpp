#include <iostream>
#include <cstdio>
using namespace std;

// Can be defined globally or inside a function
enum cat2
{
    temp2,
    t2,
    m2,
    nm2
};
struct name12
{
    int a12;
};

inline int fun()
{
    cout << "Hello World";
}
int main()
{
    enum cat
    {
        temp,
        t,
        m,
        nm
    };
    struct name
    {
        int a1;
    };
    struct name x;
    x.a1 = 89;
    cout << x.a1 << endl;
    int a = 14;
    // a/=temp;

    // cout<<a<<endl;
    // cout<<temp<<endl;
    // cout<<t<<endl;
    // cout<<m<<endl;
    // cout<<nm<<endl;

    int x1 = 100;
    int y = 90;
    int *p = &x1, *q;
    // p=&x1;
    q = &y;
    p = q;
    // cout<<"x= "<<x1<<" y= "<<y<<endl;
    // cout<<p<<endl;//" "<<&x1<<endl;
    // cout<<q<<endl;//" "<<&y<<endl;
    // cout<<*p<<" "<<*(&x1)<<endl;
    // cout<<*q<<" "<<*(&y)<<endl;

    char arr[20];
    // cout<<a<<endl;

    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = 65 + i;
        //  *(arr+i)='\0';

        // cout << arr[i];
    }
    // cout << endl;
    // fun();

    int array[5]={1,1,2,2,2};
    int *ptr = array; // direct initialization of the pointer with the
                      // address of the 1st element of the array

    // pointer "points to" the addresss of the first element
    // ptr = array;
    int count =0;
    // printf("%d \n",(sizeof(array)/sizeof(int)));
   for(int i=0;i<(sizeof(array)/sizeof(int));i++)
    {
        if (arr[i] == 2)
        {
            count++;
            // ptr++; // +1 increment in the address of pointer
                   // by 4 integer bit
        }
    }
    cout << "The occurance of '2' in the array is: " << count << endl;

    int num1, num2;
    int *myptr;

    myptr = &num1; // mypointer points to address of num1
    *myptr = 10;   // value at address *(myptr) == *(&num1) == num1
                   // ==> asssigned to 10

    // printing num1 & value *(address) == 10
    cout << "num1= " << num1 << " myptr= " << *myptr << endl;

    myptr = &num2; // mypointer points to new address of num2
    *myptr = 20;   // value at address *(myptr) == *(&num2) == num2
                   // ==> asssigned to 2.0

    // printing num2 & value *(address) == 20
    cout << "num2= " << num2 << " myptr= " << *myptr << endl;

    return (0);
}
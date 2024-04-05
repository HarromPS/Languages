#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

// ARRAYS IN C++
int main()
{

    int arr[3]; // Array is declared with SIZE OF 3 elements

    float arr2[4] = {12.3, 34.2, 23, 2213};
    // array size is 16 due 16 characters
    // therefore, no of elements in array is given by
    // sizeof(array)/sizeof(datatype)

    cout<<"The elements in array is "<<(sizeof(arr2))<<endl;
    // Array index    0,      1,  2,  3
    // Array initialized with size of 4 elements
    cout << arr2[0] << endl; // index 0 i.e 12.3

    string arr3[] = {"Hello", "World"}; // Array of string iniialized without arrauy size
                                        // Array size is 12, 2 elements
    // cout<<arr[0] ;

    // storing values in array using fro loop
    int arr4[3];

    for (int i = 0; i <= 3; i++)
    {
        cout << "Enter the " << i + 1 << " element" << endl;
        cin >> arr4[i];
    }

    for (int i = 0; i <=3; i++)
    {
        cout << "The elements you entered " << arr4[i] << endl;
    }

    // 2D ARRAYS 

    int arr5[2][3]={
        {1,2,3},
        {4,5,6}
        };

    for(int x=0;x<2;x++)
    {
        for(int y=0;y<3;y++){
            cout<<"The element in "<<x<<","<<y<<" is "<<arr5[x][y]<<endl;
        }
    }

    return 0;
}
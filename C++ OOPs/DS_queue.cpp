#include <iostream>
#include <cstdio>
using namespace std;
// DS:
// Q. Write a program on array queue to add new element at end and remove
// element at first

int repeat(int arr[])   // function to add any length of elements 
{
    int p;
    cout << "\nEnter the new element\n";
    cin >> p;

    if (p == 0)       // base condition to stop function running endless
    {
        cout<<"FINISH!"<<endl;
        return 0;
    }
    else
    {
        cout << "\nEnter '0' to end the process OR continue your entering\n";
        for (int i = 0; i < 4; i++)
        {
            arr[i] = arr[i + 1];
            if (i == (4 - 1))
            {
                arr[4 - 1] = p;
            }
        }
        cout << "The new array is:" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << arr[i] << " ";
        }
        return repeat(arr);         // using recursion to repeat the above process
    }
}
int main()
{
    int arr[4];
    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < 4; i++)     // taking the inputs of array
    {
        cout << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "The elements you entered \n";

    for (int i = 0; i < 4; i++)      // printing the entered elements
    {
        cout << arr[i] << " ";
    }
    int x;
    cout << "\nEnter the new element your array" << endl;
    cin >> x;                       // enter new element i.e at last
                                    // and replacing 1st element with other
    for (int i = 0; i < 4; i++)
    {
        arr[i] = arr[i + 1];
        if (i == (4 - 1))
        {
            arr[4 - 1] = x;
        }
    }
    cout << "The new array is:" << endl;    // printing updated array
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " " ;
    }
    repeat(arr);        // calling the function

    return 0;
}
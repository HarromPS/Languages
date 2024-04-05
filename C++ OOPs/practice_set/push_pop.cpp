#include <iostream>
#include <cstdio>
using namespace std;

// defining globally, top initially empty
// TOP is a pointer points the index of top element in the stack.
// But here I am using arrays instead of stack
int top = -1;

// DS Perform stack operation using array & function

// Pushing elements in the array
int push(int *arr, int n)
{
    int x=0;
    cout << "\nHow many elements you want to add ?" << endl;
    cin>>x;
    for (int i = n+1; i <= n+x; i++)
    {
        cout << "Enter " << i << " element: ";
        cin >> arr[i];
       
    }
    cout << "The elements in new array are: " << endl;
    for (int j = 0; j <=n+1; j++)
    {
        cout << arr[j] << " ";
    }
    // cout << "top= " << top << endl;
    return 0;
    // pop(local,count);
}
// int pop( local,int n) // if operator pop operator
// {

// }
int main()
{
    int n;
    cout << "Enter the size of your array" << endl;
    cin >> n;
    int arr[n];
    
    cout << "Enter the elments of your array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
        top++;
    }
    cout << "The elements in the array are: " << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << "The 'top'= " << top << endl;
    push(arr, n);

    // cout << "The elements in new array are: " << endl;
    // for (int j = 0; j < n+1; j++)
    // {
    //     cout << arr[j] << " ";
    // }
    // push(arr,n);

    return 0;
}
#include <iostream>
#include <cstdio>
// Including the required header files
#include<functional>
#include<algorithm>
using namespace std;

// Function Objects (functors ): Function wrapped in a class, so that it is available 
// like an object 
int main()
{
    int arr[]={1,23,4,2,54,434};
    cout<<"Array: "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    // Sorting in ascending order
    sort(arr,arr+6);
    cout<<endl<<"Array in ascending order: "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    sort(arr,arr+6,greater<int>());
    cout<<endl<<"Array in decending order: "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
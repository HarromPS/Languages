#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, j =n;
    cout<<"Array size: "<<endl;
    cin>>n;
    int nums[n];
    int ans[2 * n];

    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<"==>";
        cin >> nums[i];

    }
    for (int i = 0; i <(2*n); i++)
    {
        if(i>=n)    // 3==3
        {
            ans[i]=nums[i-n];   // arr[3]=num[3-3];
        }
        else{
            ans[i]=nums[i];
        }
    }
    for(int i=0;i<(2*n);i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
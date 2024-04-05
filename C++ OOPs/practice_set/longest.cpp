//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // arr[4]={8,8,8,8};    max=8, min=8 difference is 0 < 1
        // finding the max and min whose difference is less than 1
        int x=arr[0];
        int y=arr[0],count=0;
        for(int i=0;i<N;i++)
        {
            //finding max
            if(x<arr[i])
            {
                x=arr[i];
                // count+=1;
            }
        }
        for(int i=0;i<N;i++){
            // finding min 1 less than max
            if((x-arr[i])<=1)
            {
                count+=1;
            }
           

        }
        // cout<<"Max: "<<x;
        // // cout<<" Min: "<<y<<endl;
        // cout<<" count "<<count<<endl;
        return count;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
#include<iostream>
#include<cstdio>
using namespace std;

    // RECURSION 
int factorial(int n){
    if(n==0 || n==1){     // base condition 
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter a number to find its factorial \n==>";
    cin>>n;

    int x=factorial(n);
    cout<<"The factorial of "<<n<<" is "<<x<<endl;

    return 0;
}
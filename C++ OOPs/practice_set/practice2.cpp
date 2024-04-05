#include <iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){   
    cout<<"Student Name: HariOm P. Shivhare"<<endl;
    cout<<"Reg No: 2021BIT046"<<"\n";
    int i,n,a[n],b[n],And[n],OR[n],XOR[n];
    cout<<"Enter binary inputs only or else ouputs will be undesired"<<endl;
    cout<<"Enter the bit size of your inputs"<<endl;
    cin>>n;
    cout<<"Enter the elements of the first input"<<endl;
    for(i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element"<< endl<<"==>";
        cin>>a[i]; 
        
    }
     cout<<"Enter the elements of the second input"<<endl;
     for(i=0;i<n;i++) {
        cout<<"Enter the "<<i+1<<" element"<< endl<<"==>";
        cin>>b[i];
    }
    cout<<"The inputs are"<<endl;
     for(i=0;i<n;i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }
     for(i=0;i<n;i++){
        And[i]=a[i]&b[i];
        OR[i]=a[i]|b[i];
        XOR[i]=a[i]^b[i];
    }
     cout<<"The output of the AND operation is: "<<endl;
     for(i=0;i<n;i++){
       cout<<And[i]<<" ";
    }
     cout<<endl<<"The output of the OR operation is: "<<endl;
     for(i=0;i<n;i++){
       cout<<OR[i]<<" ";        }
     cout<<endl<<"The output of the XOR operation is: "<<endl;
     for(i=0;i<n;i++){
       cout<<XOR[i]<<" ";       }
            return 0;           }
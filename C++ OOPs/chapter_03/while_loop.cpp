#include<iostream>
#include<cstdio>
using namespace std;

    // WHILE, DO WHILE AND FOR LOOP
int main ()
{   
    // while loop

    int index=1;
    while(index<=10)
    {
        cout<<"We are at index "<<index<<endl<<endl;
        index+=1;
    }

    // do while loop

    int index2=2;
    do{
        
        cout<<"We are at index2 "<<index2<<endl<<endl;
        index2+=1;
    }while(index2<=5);
    
    // for loop

    for (int i=0;i<10;i++)
    {
        cout<<"We are at position "<<i+1<<endl;
    }
    
    return 0;
}
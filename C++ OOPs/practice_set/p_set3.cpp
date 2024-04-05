// #include <iostream>
// #include <cstdio>
// using namespace std;
// // PRACTICAL 01
// // Q6 Write a program to print the result of student
// // take input from the user & suggest that student is pass or fail
// int main(){
//     cout << "Student name: Hariom P. Shivhare\nReg No: 2021BIT046\n";
//     int phy, chem, maths;
//     float total, percent;
//     string name;
//     cout << "Enter the name of student: " << endl;
//     getline(cin, name);

//     cout<<"Enter the marks for Phy, Chem, Maths"<<endl;
//     cout<<"Phy \n==>";
//     cin>>phy;
//     cout<<"Chem \n==>";
//     cin>>chem;
//     cout<<"Maths \n==>";
//     cin>>maths;
//     total=phy+chem+maths;
//     percent=(total*100)/300;
//     cout<<"Name of the student is: "<<name<<endl;
//     cout<<"The total marks obtained by the student is: "<<total<<" out of 300"<<endl;
//     cout<<"The percentage the student scored is: "<<percent<<"% out of 100"<<endl;
//     if(percent >40){
//         cout<<"Passed\n";
//     }
//     else{
//         cout<<"Failed\n";
//     }
//     return 0;
// }

//http://10.70.15.141:9997/user/guest_login.asp?origurl=http%3a%2f%2fwww%2emsftconnecttest%2ecom%2fredirect&langname=en%5fUS&logo=%2flogo%5f2
//////////////////////////////

// #include<iostream>
// #include<cstdio>
// using namespace std;

// int main(){
//     int n=5;

//     while ((n!=0) || (n!=1))
//     {
//         int b=n*b;
//         // b=n-1;
//         b=n-1;
//         if(b!=0 || b!=1)
//         {
//             cout<<b<<endl;
//         }
//     }
    
    
//     return 0; 
// }

#include<iostream>
#include<cstdio>
using namespace std;

int main(){

int count =0;

// Here n=3 and there are 2 loops 
// so time complexity or loop run for n*n times ==> log n^n(base n)
// for 3 nested loops it will run for n*n*n times 
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            for(int z=0;z<3;z++)
            {
                count ++;
            }
        }
    }
    cout<<"The loop will run for "<<count<<" times"<<endl;
    return 0; 
}
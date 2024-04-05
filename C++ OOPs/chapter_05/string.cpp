#include<string>
#include<iostream>
#include<cstdio>
using namespace std;

        // STRING   
int main(){

    string name="Hello";
    cout<<"The string is "<<"'"<<name<<"'"<<endl;

    // LENGTH OF THE STRING 
    cout <<"TThe length of the string is "<<name.length()<<endl;\

    // SUB-STRING 

    // will print Hel
    cout<<"The sub letters in string is "<<name.substr(0,3)<<endl;

    // CONCATINATION with words and numbers
    string b=" World";

    cout<<"The new added string is "<<name+b<<endl;

    string x="10",y="20";
    cout<<"The added number string is "<<x+y<<endl;

    // MEMORY ALLOCATION
    string a="vscode";
    for(int i=0;i<7;i++){
        // the seventh and ahead numbers contain the null character '\0'
        cout<<a[i]<<endl;
    }

}
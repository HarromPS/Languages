#include<iostream>
#include<cstdio>
using namespace std;

int strlen(const char * p)
{
    char b=*p;
    cout<<*p;
    cout<<endl<<b;

}
int main(){
char a='a';
char* p=&a;
    strlen(p);
    return 0; 
}
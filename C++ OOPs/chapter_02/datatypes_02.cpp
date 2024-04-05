#include<iostream>
#include<cstdio>
using namespace std;

int main(){

    float d=10;
    long double c=20;

    //*************** Built in datatypes *************************
    //********** Float, Double, Long Double Literals *************

    cout<<"The sizeof 34.4 default double is "<<sizeof(34.4)<<endl;
    cout<<"The sizeof 34.4f float is "<<sizeof(34.4f)<<endl;
    cout<<"The sizeof 34.4F flaot is "<<sizeof(34.4F)<<endl;
    cout<<"The sizeof 34.4l long double is "<<sizeof(34.4l)<<endl;
    cout<<"The sizeof 34.4L long double is "<<sizeof(34.4L)<<endl;


    return 0; 
}
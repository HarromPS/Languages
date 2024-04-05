#include<iostream>
#include<cstdio>
using namespace std;

// " new " & " delete " keyword 

// 1) "new" keyword initializes the memory & "returns the address" of newely 
// allocated & initialized memory
// SO WE ALLOCATE MEMORY OF ANY DATATYPE USING POINTERS 
// POINTERS WILL STORE THE ADDRESS WHICH RETURNED AFTER MEMORY ALLOCATION 
int main(){

    // creating a pointer 
    int *ptr;
    // memory allocation for int == 45
    ptr = new int (45);
    cout<<"The value at address of ptr is: "<<(*ptr)<<endl;

    // memory allocation for int array
    int *arr= new int [3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    cout<<"The value at address of arr[0] is: "<<arr[0]<<endl;
    cout<<"The value at address of arr[1] is: "<<arr[1]<<endl;
    cout<<"The value at address of arr[2] is: "<<arr[2]<<endl;

    int *arr2=new int [3];
    arr2[0]=10;
    *(arr2+1)=20;
    arr2[2]=30;

    // Delete array pointer using braces [] and free the memory
    delete[] arr2;
    cout<<endl<<"arr2 is Deleted"<<endl;
    cout<<"The value at address of arr2[0] is: "<<arr2[0]<<endl;
    cout<<"The value at address of arr2[1] is: "<<arr2[1]<<endl;
    cout<<"The value at address of arr2[2] is: "<<arr2[2]<<endl;
    

    return 0; 
}
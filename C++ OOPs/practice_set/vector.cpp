#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

char * restoreString(char * s, int* indices, int iSize){
    char* ans;
    for(int i=0;i < iSize;i++){
        ans[i]=s[i];
    }
    for(int i=0;i < iSize;i++){
        ans[indices[i]]=s[i];
        printf("%c ",ans[i]);
    }
    return ans;
}
int main(){

   char arr[9]={'c','o','d','e','l','e','e','t'};
   int ind[8]={4,5,6,7,0,2,1,3};
     restoreString(arr,ind,9);
   printf("%s ",arr);

    return 0;
}
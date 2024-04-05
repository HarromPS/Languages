#include <stdio.h>

int change(int a)
{
    a = a + 20;
    return a;
}

int main()
{

    int a = 10;
    int b = change(a);
    printf("The changed value of %d is %d\n",a,b);  // value of a is still unchanged
    return 0;
}
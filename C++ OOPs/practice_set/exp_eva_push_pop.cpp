#include <iostream>
#include <cstdio>
using namespace std;

// DS Push Pop Top
int push(char *arr) // if operand push to stack
{
    char local[3];
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        // braces are imporyant or else modifiable value error
        // operator ==> *, +, - , /
        if ((arr[i] == '*') || (arr[i] == '+') || (arr[i] == '-'))
        {
            arr[i] =arr[i+1];
            count++;
        }
    }
    return count;
    pop(local,count);
}
int pop(char* local,int n) // if operator pop operator
{

}
int main()
{

    int a = 4, b = 2, c = 3;

    // Operator Precedence

    cout << a + b * c << endl;   // precedance given to '*' first then '+'
    cout << (a + b) * c << endl; // parenthesized '+', then the output a/c to braces

    // initializing array of string of digits and operators to pass in functions

    char arr[3] = {'12', '*', '3'}; // means 12*3   output==>36
    // char *ptr=arr;

    push(arr);

    return 0;
}
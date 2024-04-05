#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int pivotInteger(int n)
{
    if (n == 1)
    {
        return n;
    }
    double sum = (double)(n * (n + 1)) / 2;
    double y = sqrt(sum);
    if((int)sqrt(sum)*(int)sqrt(sum)==sum){
        return (int)sqrt(sum);
    }
    return -1;
}
int main()
{
    int x = 15;
    int result = pivotInteger(x);
    cout << result << endl;
    return 0;
}
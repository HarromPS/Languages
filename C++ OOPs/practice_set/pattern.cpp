#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    int n = 5, count = 0, x = 1;
    // Pattern 1
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++) // n=15
    // {
    //     if (i % 5 == 0)
    //     {
    //         printf("# ");
    //         count++;
    //         // printf("\n'#' is at position %d\n ",i);
    //     }
    //     else
    //     {
    //         printf("* ");
    //     }
    // }

    // Pattern 2
    // for (int row = 0; row <n; row++)
    // {
    //     for (int col = 0; col < (n); col++)
    //     {
    //         if (col == 0 || row == (n-1) || col == row || row==0 || col==(n-1) || col==(n-row))
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    // Pattern 3
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col =1; col <= row; ++col)
    //     {
    //         printf("%d ", (col%2));
    //     }
    //     printf("\n");
    // }

    // // Pattern 4
    // for (int row = 0; row <= n; row++)
    // {
    //     for (int col =0; col <= row; ++col)
    //     {
    //         printf("%d ", (x%2));
    //         x++;
    //     }
    //     printf("\n");
    // }

    // // Pattern 5
    // for (int row = 0; row < n; ++row)
    // {
    //     for (int col =0; col <= row; ++col)
    //     {
    //         printf("%d ",x);
    //         x++;
    //     }
    //     printf("\n");
    // }

    // Pattern 6
    x = 0;
    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            if (col == 0 || row == 0 || col == (n - 1) || row == (n - 1) || col)
            {
               
                printf("%d ",n);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
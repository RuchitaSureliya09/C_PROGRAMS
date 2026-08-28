// *********
// **** ****
// ***   ***
// **     **
// *       *

#include <stdio.h>
void main()
{
    int n;

    printf("Enter value of row(n) : ");
    scanf("%d", &n);
    int temp = n;

    for (int i = 0; i < 2 * temp - 1; i++)
    {
        printf("*");
    }

    printf("\n");

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            printf("*");
        }

        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }

        for (int j = n - 1; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
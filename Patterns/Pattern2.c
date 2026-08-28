// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>
void main()
{
    int n;

    printf("Enter value of row(n) : ");
    scanf("%d", &n);
    int temp = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int j = 2 * temp - 1; j > 0; j--)
        {
            printf("*");
        }
        temp--;

        printf("\n");
    }
}
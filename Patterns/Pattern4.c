// * * * * * * *
//  *        *
//    *   *
//      *
//    *   *
//   *       *
// * * * * * * *

#include <stdio.h>
void main()
{
    int n;

    printf("Enter value of n : ");
    scanf("%d", &n);

    int temp = 2 * n - 1;
    int a = 0;

    for (int i = 1; i <= temp; i++)
    {
        for (int j = 1; j <= temp; j++)
        {
            if (i == j || i == 1 || i == temp || j == temp - a)
                printf("*  ");
            else
                printf("   ");
        }
        a++;
        printf("\n");
    }
}
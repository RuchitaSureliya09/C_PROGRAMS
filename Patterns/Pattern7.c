// 1
// 1 * 1
// 1 * 3 * 1
// 1 * 3 * 5 * 3 * 1

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of row(n) : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int num = 1;
        for (int j = 1; j <= 4 * i - 3; j++)
        {
            if (j % 2 != 0)
            {
                printf("%d ",num);

                if (j < 2 * i - 1)
                    num += 2;
                else
                    num -= 2;
            }
            else
                printf("* ");
        }
        printf("\n");
    }
}
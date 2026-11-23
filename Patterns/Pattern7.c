<<<<<<< HEAD
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
=======
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
>>>>>>> e940c1dbe31db48622558d17d681f727e3fda4ea
}
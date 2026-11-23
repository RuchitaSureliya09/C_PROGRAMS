<<<<<<< HEAD
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

#include <stdio.h>

int min_num(int a, int b)
{
    return (a < b ? a : b);
}

void main()
{
    int n;
    printf("Enter value of row(n) : ");
    scanf("%d", &n);

    int temp = 2 * n - 1;

    for (int i = 0; i < temp; i++)
    {
        for (int j = 0; j < temp; j++)
        {
            int minDist = min_num(min_num(i, j), min_num(temp - 1 - i, temp - 1 - j));
            printf("%d ",(n - minDist));
        }
        printf("\n");
    }
=======
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

#include <stdio.h>

int min_num(int a, int b)
{
    return (a < b ? a : b);
}

void main()
{
    int n;
    printf("Enter value of row(n) : ");
    scanf("%d", &n);

    int temp = 2 * n - 1;

    for (int i = 0; i < temp; i++)
    {
        for (int j = 0; j < temp; j++)
        {
            int minDist = min_num(min_num(i, j), min_num(temp - 1 - i, temp - 1 - j));
            printf("%d ",(n - minDist));
        }
        printf("\n");
    }
>>>>>>> e940c1dbe31db48622558d17d681f727e3fda4ea
}
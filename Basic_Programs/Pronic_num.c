// WAP to find weather given number is Pronic or not.
// A Pronic Number is defined as a number that is the product of two consecutive non-negative
// integers. In other words, N is a Pronic Number if there exists a non-negative integer k such that N
// = k * (k + 1).
// E.g. 6 is a Pronic Number because 6=2*3

#include <stdio.h>
void main()
{
    int n;

    printf("Enter any nubmer : ");
    scanf("%d", &n);

    int flag = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && n == i * (i + 1))
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1 || n == 0)
        printf("Given number is Pronic");
    else
        printf("Given number is not Pronic");
}

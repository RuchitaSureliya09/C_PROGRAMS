#include <stdio.h>
void main()
{
    int n;

    printf("Enter any integer number : ");
    scanf("%d", &n);

    int rem = 0, oc = 0, ec = 0;

    while (n != 0)
    {
        rem = n % 10;

        if (rem % 2 == 0)
            ec++;
        else
            oc++;

        n /= 10;
    }

    printf("Total odd digits : %d\n", oc);
    printf("Total even digits : %d", ec);
}
#include <stdio.h>

int digitsum(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10 + digitsum(n / 10));
}

void main()
{
    int n;

    printf("Enter any number : ");
    scanf("%d", &n);

    printf("Sum of digit of given number by recursive: %d", digitsum(n));
}
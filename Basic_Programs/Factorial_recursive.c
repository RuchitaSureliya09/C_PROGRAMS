#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * (factorial(n - 1));
}

void main()
{
    int n;

    printf("enter any integer number : ");
    scanf("%d", &n);

    printf("Factorial by recursive : %d",factorial(n));   
}
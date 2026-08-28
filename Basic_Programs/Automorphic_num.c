// WAP to find weather given number is Automorphic or not.
// An automorphic number is a number whose square ends with the same digits as the number itself.
// For example, 5 is automorphic because 5² = 25, which ends in 5.
// Similarly, 76 is automorphic because 76² = 5776, which ends in 76.

#include <stdio.h>
void main()
{
    int n, sqr, temp, digit = 1;

    printf("Enter number : ");
    scanf("%d", &n);

    sqr = n * n;
    temp = n;

    while(temp > 0)
    {
        digit = digit * 10;
        temp = temp / 10;
    }

    if(sqr % digit == n)
        printf("Given number is Automorphic");
    else
        printf("Given number is not Automorphic");
}
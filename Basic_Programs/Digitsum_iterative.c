#include <stdio.h>
void main()
{
    int n;

    printf("Enter any number : ");
    scanf("%d", &n);

    int rem = 0, sum = 0;

    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    printf("Sum of digit of given number by iterative: %d", sum);
}

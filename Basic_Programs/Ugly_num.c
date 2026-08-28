// WAP to find weather given number is Ugly or not.
// An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
// Input: n = 6 Output: true Explana􀆟on: 6 = 2 × 3

#include <stdio.h>
void main()
{
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    while (n % 2 == 0)
    {
        n /= 2;
    }
    while (n % 3 == 0)
    {
        n /= 3;
    }
    while (n % 5 == 0)
    {
        n /= 5;
    }

    if (n == 1)
        printf("Given number is Ugly");
    else
        printf("Given number is not Ugly");
}
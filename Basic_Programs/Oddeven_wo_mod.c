#include <stdio.h>
void main()
{
    int n;

    printf("Enter any number : ");
    scanf("%d", &n);

    if ((n & 1) == 0)
        printf("Given number is even");
    else
        printf("Given number is odd");
}
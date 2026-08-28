// WAP to find a quo􀆟ent and reminder of 2 number (bigger number should be divided by lower
// number) and you are not allowed to use a division and quo􀆟ent operator.

#include <stdio.h>

void main()
{
    int n1, n2, big, small;
    int qut = 0, rem;

    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2)
    {
        big = n1;
        small = n2;
    }
    else
    {
        big = n2;
        small = n1;
    }

    rem = big;

    while(rem >= small)
    {
        rem = rem - small;
        qut++;
    }

    printf("Quotient = %d\n", qut);
    printf("Remainder = %d", rem);
}
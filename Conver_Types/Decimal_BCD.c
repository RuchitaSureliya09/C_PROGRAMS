#include <stdio.h>

void main()
{
    int n, temp, digit, rev = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    printf("BCD Equivalent = ");

    while (rev > 0)
    {
        digit = rev % 10;

        switch (digit)
        {
        case 0:
            printf("0000 ");
            break;
        case 1:
            printf("0001 ");
            break;
        case 2:
            printf("0010 ");
            break;
        case 3:
            printf("0011 ");
            break;
        case 4:
            printf("0100 ");
            break;
        case 5:
            printf("0101 ");
            break;
        case 6:
            printf("0110 ");
            break;
        case 7:
            printf("0111 ");
            break;
        case 8:
            printf("1000 ");
            break;
        case 9:
            printf("1001 ");
            break;
        }

        rev /= 10;
    }
}
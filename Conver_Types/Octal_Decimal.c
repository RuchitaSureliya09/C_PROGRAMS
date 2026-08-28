#include <stdio.h>
void mian()
{
    int octal;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    int decimal = 0, power = 1, rem = 0;

    while (octal > 0)
    {
        rem = octal % 10;
        decimal += rem * power;
        power *= 8;
        octal /= 10;
    }

    printf("Decimal Equivalent = %d",decimal);
}
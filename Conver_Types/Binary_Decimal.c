#include <stdio.h>

void main()
{
    int binary, rem;
    int decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        binary = binary / 10;
    }

    printf("Decimal Equivalent = %d", decimal);
}
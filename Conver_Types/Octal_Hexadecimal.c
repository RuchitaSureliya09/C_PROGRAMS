#include <stdio.h>

void main()
{
    int octal, rem;
    int decimal = 0, power = 1;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal > 0)
    {
        rem = octal % 10;
        decimal = decimal + rem * power;
        power = power * 8;
        octal = octal / 10;
    }

    char hex[20];
    int i = 0;

    while (decimal > 0)
    {
        rem = decimal % 16;

        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem + 55;//A,B,C,D,E,F

        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal Equivalent = ");

    for (i = i - 1; i >= 0; i--)
        printf("%c", hex[i]);
}
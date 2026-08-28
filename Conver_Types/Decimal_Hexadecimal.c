#include <stdio.h>
void main()
{
    int decimal; 

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    char hex[20];
    int i = 0;

    while (decimal > 0)
    {
        int rem = decimal % 16;

        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = (char)(rem + 55); // A,B,C,D,E,F

        decimal /= 16;
        i++;
    }

    printf("Hexadecimal Equivalent = ");

    for (i = i - 1; i >= 0; i--)
        printf("%c", hex[i]);
}
#include <stdio.h>
#include <string.h>

void main()
{
    char hex[20];

    printf("Enter a hexadecimal number: ");
    scanf("%s", &hex);

    int value = 0, decimal = 0;

    for (int i = 0; i < strlen(hex); i++)
    {
        char ch = hex[i];

        if (ch >= '0' && ch <= '9')
            value = ch - '0';
        else if (ch >= 'A' && ch <= 'F')
            value = ch - 'A' + 10;
        else if (ch >= 'a' && ch <= 'f')
            value = ch - 'a' + 10;

        decimal = decimal * 16 + value;
    }

    printf("Decimal Equivalent = %d",decimal);
}
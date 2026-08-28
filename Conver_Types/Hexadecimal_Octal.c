#include <stdio.h>
#include <string.h>

void main()
{
    char hex[20];
    int decimal = 0, value, i;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    for(i = 0; hex[i] != '\0'; i++)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
            value = hex[i] - '0';
        else if(hex[i] >= 'A' && hex[i] <= 'F')
            value = hex[i] - 'A' + 10;
        else if(hex[i] >= 'a' && hex[i] <= 'f')
            value = hex[i] - 'a' + 10;

        decimal = decimal * 16 + value;
    }

    int octal[20];
    i = 0;

    while(decimal > 0)
    {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }

    printf("Octal Equivalent = ");

    for(i = i - 1; i >= 0; i--){
        printf("%d", octal[i]);
    }
}
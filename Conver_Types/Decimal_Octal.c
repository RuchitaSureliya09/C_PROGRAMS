#include <stdio.h>
void main()
{

    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int octal[20];
    int i = 0;

    while (decimal > 0)
    {
        octal[i] = (decimal % 8);
        decimal /= 8;
        i++;
    }

    printf("Octal Equivalent = ");

    for(i = i - 1; i >= 0; i--){
        printf("%d", octal[i]);
    }
}
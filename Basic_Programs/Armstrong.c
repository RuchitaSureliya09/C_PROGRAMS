#include <stdio.h>

void main()
{
    int n, temp1, temp2, rem;
    int count = 0, sum = 0;

    printf("Enter any number : ");
    scanf("%d", &n);

    temp1 = n;
    temp2 = n;

    while (n != 0)
    {
        count++;
        n /= 10;
    }

    while (temp1 != 0)
    {
        rem = temp1 % 10;

        int power = 1;
        for (int i = 0; i < count; i++)
        {
            power *= rem;
        }

        sum += power;
        temp1 /= 10;
    }

    if (sum == temp2)
        printf("Given number is Armstrong");
    else
        printf("Given number is not Armstrong");
}
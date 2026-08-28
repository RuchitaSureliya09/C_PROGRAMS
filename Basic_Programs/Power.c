// WAP to find a power a^b (without using power and mul􀆟plica􀆟on opera􀆟on)

#include <stdio.h>
void main()
{
    int x, y;

    printf("Enter base X and power Y : ");
    scanf("%d %d", &x, &y);

    int power=1, sum=0;

    for (int i = 1; i <= y; i++)
    {
        sum=0;
        for (int j = 1; j <= x; j++)
        {
            sum += power;
        }
        power = sum;
    }

    printf("Answer : %d",power);
}
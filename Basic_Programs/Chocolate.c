// WAP for following Scenario.
// Given n rupees and a chocolate price of m for each chocolate, with a wrapper exchange offer of 1
// chocolate per k wrappers, calculate the total number of chocolates you can eat with n rupees.

#include <stdio.h>

void main()
{
    int n, m, k;

    printf("Enter total money (n): ");
    scanf("%d", &n);

    printf("Enter price of one chocolate (m): ");
    scanf("%d", &m);

    printf("Enter wrappers needed for exchange (k): ");
    scanf("%d", &k);

    int chocolates = n / m;
    int total = chocolates;
    int wrappers = chocolates;

    while (wrappers >= k)
    {
        int extra = wrappers / k;

        total += extra;
        wrappers = (wrappers % k) + extra;
    }

    printf("Total chocolates you can eat : %d", total);
}
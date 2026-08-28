#include <stdio.h>
void main()
{
    int n;

    printf("Enter any integer number : ");
    scanf("%d",&n);

    int fact=1;

    for(int i=0;i<n;i++){
        fact=fact*(n-i);
    }

    printf("Factorial by iterative : %d",fact);
}
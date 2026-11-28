#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of element : ");
    scanf("%d", &n);

    int a[n], temp;
    
    printf("Enter elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    printf("\nAfter Insertion Sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}
#include <stdio.h>

int isInArray(int a[], int m)
{
    int ele, flag = 0, j;
    printf("\nEnter element that you want to find : ");
    scanf("%d", &ele);

    for (j = 0; j < m; j++)
    {
        if (ele == a[j])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        return 0;
    else
        return j;
}

void main()
{
    int n;
    printf("Enter number of element : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element[%d] :", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    int ind = isInArray(arr, n);

    if (ind == 0)
        printf("Element not found!");
    else
        printf("Found that element at %d index.", ind);
}
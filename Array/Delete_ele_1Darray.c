#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of element : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d  ", arr[i]);
    }

    int ele;
    printf("Enter element that you want to delete : ");
    scanf("%d", &ele);

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (ele == arr[i])
        {
            n--;
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            flag++;
        }
    }

    if (flag == 0)
        printf("Element not found!");
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf(arr[i] + "  ");
        }
    }
}
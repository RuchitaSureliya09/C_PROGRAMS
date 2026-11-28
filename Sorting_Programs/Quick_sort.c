#include <stdio.h>

int part(int a[], int low, int high)
{
    int pivot, i, temp;

    pivot = a[high];
    i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(a[j] < pivot)
        {
            i++;

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quicksort(int a[], int low, int high)
{
    int p;

    if(low < high)
    {
        p = part(a, low, high);

        quicksort(a, low, p - 1);
        quicksort(a, p + 1, high);
    }
}

void main()
{
    int a[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n - 1);

    printf("\nAfter Quick Sort :\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
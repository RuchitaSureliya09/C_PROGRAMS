#include <stdio.h>
void main()
{
    int size;

    printf("Enter size of Array : ");
    scanf("%d", &size);

    int arr[size];
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        printf("Enter element[%d] : ",i);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            sum += arr[i];
    }

    printf("\nSum of even number into 1D Array : %d", sum);
}
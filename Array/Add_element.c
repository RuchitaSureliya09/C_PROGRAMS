#include <stdio.h>
void main()
{
    int size;

    printf("Enter size of array : ");
    scanf("%d", &size);

    int arr[size], new_ele, ele_pos;

    for (int i = 0; i < size - 1; i++)
    {
        printf("Enter element[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\nEnter new element : ");
    scanf("%d", &new_ele);
    printf("Enter position of new element : ");
    scanf("%d", &ele_pos);

    for (int i = size - 1; i >= ele_pos; i--)
    {
        if (i == ele_pos)
            arr[i] = new_ele;
        else
            arr[i] = arr[i - 1];
    }

    printf("After add new element Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}
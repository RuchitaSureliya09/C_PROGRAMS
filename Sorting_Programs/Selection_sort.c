#include <stdio.h>

void main(){
    int n;
    printf("Enter number of element : ");
    scanf("%d",&n);

    int a[n], temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("After Selection Sort : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}
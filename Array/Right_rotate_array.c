// Given an array, rotate the array to the right by k steps, where k is non-negative.
// Example 1:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of element : ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter Elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Before Rotate Elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", nums[i]);
    }

    int k;
    printf("\nEnter number of rotation (non-negative): ");
    scanf("%d", &k);

    int m = 0;

    for (int i = 1; i <= k; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            nums[j + 1] = nums[j];
        }
        nums[m] = nums[n];
    }

    printf("After Rotate Elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", nums[i]);
    }
}
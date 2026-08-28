// Given an integer n, return the nth digit of the infinite integer sequence [1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11, ...]
// Input: n = 11
// Output: 0
// Explana􀆟on: The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is a 0, which is part of the number 10.

#include <stdio.h>

void main() {
    int n;

    printf("Enter any integer :");
    scanf("%d", &n);

    int digits = 1;
    int count = 9;
    int start = 1;

    while (n > digits * count) {
        n -= digits * count;
        digits++;
        count *= 10;
        start *= 10;
    }

    int number = start + (n - 1) / digits;
    int index = (n - 1) % digits;

    char str[20];
    sprintf(str, "%d", number);

    printf("%c", str[index]);
}
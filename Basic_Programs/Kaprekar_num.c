// WAP to find weather given number is Kaprekar or not.
// A Kaprekar number is a non-negative integer that, when squared, can be split into two parts
// whose sum equals the original number.
// For E.g. 45 is a Kaprekar number because 45 squared (2025) can be split into 20 and 25, and 20 +
// 25 = 45.

#include <stdio.h>

void main(){
        printf("Enter any number : ");
        int n = sc.nextInt();

        int sqr = n * n;
        int temp = n;
        int count = 0, i = 1;

        while (temp != 0) {
            count++;
            temp /= 10;
        }

        int rem=0;
        while (i >= count) {
            rem=sqr%10;
            sqr/=10;
            i++;
        }

        int sum=rem+sqr;

        if (sum==n)
            printf("Given number is Kaprekar");
        else
            printf("Given number is Kaprekar");
}
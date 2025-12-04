// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum is %d\n", sum);

    return 0;
}

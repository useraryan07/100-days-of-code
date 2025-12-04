//Q2: Write a program to input two numbers and display their sum, difference, product, and quo#tient.

#include <stdio.h>

int main() {
    int a, b, sum, diff, prod, quo;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;
    quo = a / b;

    printf("Sum is %d\n", sum);
    printf("Difference is %d\n", diff);
    printf("Product is %d\n", prod);
    printf("Quotient is %d\n", quo);

    return 0;
}
//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, num, first, last, digits;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    last = n % 10;

    digits = (int)log10(n);
    first = n / (int)pow(10, digits);

    n = n - first * (int)pow(10, digits) - last;
    n = last * (int)pow(10, digits) + n + first;

    printf("Number after swapping first and last digit = %d\n", n);

    return 0;
}

//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, remainder, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        remainder = n % 10;
        if(remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        n /= 10;
    }

    if(hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits in the number\n");

    return 0;
}

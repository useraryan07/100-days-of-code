//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n, i;
    int binary[32];

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    for(i = 0; n > 0; i++) {
        binary[i] = n % 2;
        n /= 2;
    }

    printf("Binary: ");
    for(i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

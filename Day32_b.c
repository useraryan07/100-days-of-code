//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  // to store frequency of each digit

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0)  // handle negative numbers
        num = -num;

    // count digits
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    int maxDigit = 0;
    for(int i = 1; i < 10; i++) {
        if(count[i] > count[maxDigit])
            maxDigit = i;
    }

    printf("Digit that occurs the most: %d\n", maxDigit);
    printf("It appears %d times.\n", count[maxDigit]);

    return 0;
}

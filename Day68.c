// rite a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n - 1];
    int totalSum = n * (n - 1) / 2;
    int arrSum = 0;

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        arrSum += arr[i];
    }

    printf("%d\n", totalSum - arrSum);

    return 0;
}

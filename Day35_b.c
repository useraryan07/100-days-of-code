//Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int arr[100], n, k, temp[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    k = k % n;
    for(int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
    printf("Array after rotation: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

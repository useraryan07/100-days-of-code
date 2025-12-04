//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[100], n, first, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    first = second = -1e9;
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    printf("Second largest element: %d", second);
    return 0;
}

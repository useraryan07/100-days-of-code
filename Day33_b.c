//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, num, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // +1 because we'll insert one more element

    printf("Enter %d elements (in sorted order):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    // Find the correct position
    pos = n; // default (if it's largest)
    for(int i = 0; i < n; i++) {
        if(num < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = num;
    n++; // increase size

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

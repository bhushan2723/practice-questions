#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 50};
    int M = 0;

    // Finding the maximum value
    for (int i = 0; i < 4; i++) {
        if (arr[i] > M) {
            M = arr[i];
        }
    }

    // Printing the array elements
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nMaximum Value: %d\n", M);

    return 0;
}

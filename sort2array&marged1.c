#include <stdio.h>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mergeArrays(int a[], int b[], int merged[], int size) {
    int i = 0, j = 0, k = 0;

    while (i < size && j < size) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Copy remaining elements from array a
    while (i < size) {
        merged[k++] = a[i++];
    }

    // Copy remaining elements from array b
    while (j < size) {
        merged[k++] = b[j++];
    }
}

int main() {
    int a[5] = {8, 3, 1, 6, 4}; // First array
    int b[5] = {9, 2, 7, 5, 10}; // Second array
    int merged[10]; 

    sortArray(a, 5);
    sortArray(b, 5);

    mergeArrays(a, b, merged, 5);

    // Print sorted and merged array
    printf("Sorted and Merged Array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

/*
Sorted and Merged Array: 1 2 3 4 5 6 7 8 9 10 
*/

#include <stdio.h>

int printArray(int *A, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high) {
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do {
        while (A[i] <= pivot) {
            i++;
        }
        while (A[j] > pivot) {
            j--;
        }
        if (i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high) {
    int partitionIndex;

    if (low < high) {
        partitionIndex = partition(A, low, high);
        printf("Array after partition: ");
        printArray(A, high + 1); // Print array after partition
        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);
    }
}

int main() {
    int A[] = {6,4,11,17,2,24,14};
    int n = 8;
    printf("Initial array: ");
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printf("Sorted array: ");
    printArray(A, n);
    return 0;
}

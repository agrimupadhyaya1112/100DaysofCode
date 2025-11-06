#include <stdio.h>
#include <stdlib.h>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < m) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < n) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int m, n;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    int arr1[m];
    printf("Enter the sorted elements of the first array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int arr2[n];
    printf("Enter the sorted elements of the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedArr[m + n];

    mergeSortedArrays(arr1, m, arr2, n, mergedArr);

    printf("Merged sorted array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
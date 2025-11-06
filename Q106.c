#include <stdio.h>
#include <stdlib.h>
void findNextGreaterElements(int arr[], int n, int result[]) {
    int i, j;
    for (i = 0; i < n; i++) {
        result[i] = -1; 
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];
                break;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], result[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findNextGreaterElements(arr, n, result);
    printf("Next Greater Elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

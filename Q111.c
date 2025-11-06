#include <stdio.h>
#include <stdlib.h>

void findFirstNegative(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNegative = arr[i + j];
                break;
            }
        }
        printf("%d ", firstNegative);
    }
    printf("\n");
}

int main() {
    int n, k;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    findFirstNegative(arr, n, k);

    free(arr);
    return 0;
}

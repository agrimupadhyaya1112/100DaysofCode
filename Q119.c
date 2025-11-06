#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 1 to %d, with one repetition):\n", n, n - 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int xor_sum = 0;
    for (int i = 0; i < n; i++) {
        xor_sum ^= arr[i];
    }

    for (int i = 1; i < n; i++) {
        xor_sum ^= i;
    }

    printf("The repeated element is: %d\n", xor_sum);

    return 0;
}
#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (n < k) {
        printf("Invalid input: Array size is less than k.\n");
        return 1;
    }

    long long currentWindowSum = 0;
    for (int i = 0; i < k; i++) {
        currentWindowSum += arr[i];
    }

    long long maxSum = currentWindowSum;

    for (int i = k; i < n; i++) {
        currentWindowSum += arr[i] - arr[i - k];
        if (currentWindowSum > maxSum) {
            maxSum = currentWindowSum;
        }
    }

    printf("%lld\n", maxSum);

    return 0;
}
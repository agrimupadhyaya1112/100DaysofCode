#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    long long sum_of_elements = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum_of_elements += arr[i];
    }

    long long expected_sum = (long long)n * (n + 1) / 2;
    int missing_number = expected_sum - sum_of_elements;

    printf("%d\n", missing_number);

    return 0;
}
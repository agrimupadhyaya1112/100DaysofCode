#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int all_negative = 1;
    int max_negative = INT_MIN;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0) {
            all_negative = 0;
        }
        if (arr[i] > max_negative) {
            max_negative = arr[i];
        }
    }

    if (all_negative) {
        printf("%d\n", max_negative);
    } else {
        int max_so_far = 0;
        int current_max = 0;

        for (int i = 0; i < n; i++) {
            current_max += arr[i];
            if (current_max < 0) {
                current_max = 0;
            }
            if (current_max > max_so_far) {
                max_so_far = current_max;
            }
        }
        printf("%d\n", max_so_far);
    }

    return 0;
}

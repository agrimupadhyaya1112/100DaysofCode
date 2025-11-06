#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target;
    scanf("%d %d", &n, &target);
    int* nums = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int found_i = -1;
    int found_j = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                found_i = i;
                found_j = j;
                break;
            }
        }
        if (found_i != -1) {
            break;
        }
    }
    printf("%d %d\n", found_i, found_j);
    free(nums);
    return 0;
}

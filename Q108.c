#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* answer = (int*)malloc(sizeof(int) * numsSize);

    answer[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int suffixProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= suffixProduct;
        suffixProduct *= nums[i];
    }

    return answer;
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int returnSize1;
    int* answer1 = productExceptSelf(nums1, numsSize1, &returnSize1);

    printf("Output for [1,2,3,4]: [");
    for (int i = 0; i < returnSize1; i++) {
        printf("%d", answer1[i]);
        if (i < returnSize1 - 1) {
            printf(",");
        }
    }
    printf("]\n");
    free(answer1);

    int nums2[] = {-1, 1, 0, -3, 3};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int returnSize2;
    int* answer2 = productExceptSelf(nums2, numsSize2, &returnSize2);

    printf("Output for [-1,1,0,-3,3]: [");
    for (int i = 0; i < returnSize2; i++) {
        printf("%d", answer2[i]);
        if (i < returnSize2 - 1) {
            printf(",");
        }
    }
    printf("]\n");
    free(answer2);

    return 0;
}
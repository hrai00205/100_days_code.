#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void findClosestToZero(int* nums, int numsSize) {
    if (numsSize < 2) return;

    qsort(nums, numsSize, sizeof(int), compare);

    int left = 0;
    int right = numsSize - 1;
    int min_sum = INT_MAX;
    int res_l = 0, res_r = numsSize - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (abs(sum) < abs(min_sum)) {
            min_sum = sum;
            res_l = left;
            res_r = right;
        }

        if (sum < 0) {
            left++;
        } else if (sum > 0) {
            right--;
        } else {
            break; 
        }
    }

    printf("Elements: %d and %d\n", nums[res_l], nums[res_r]);
    printf("Sum: %d\n", min_sum);
}
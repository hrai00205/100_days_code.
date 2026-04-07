#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void countFrequency(int* nums, int numsSize) {
    if (numsSize == 0) return;

    qsort(nums, numsSize, sizeof(int), compare);

    int count = 1;
    for (int i = 1; i <= numsSize; i++) {
        if (i < numsSize && nums[i] == nums[i - 1]) {
            count++;
        } else {
            printf("%d: %d\n", nums[i - 1], count);
            count = 1;
        }
    }
}

int main() {
    int nums[] = {4, 5, 4, 1, 2, 1, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    countFrequency(nums, n);
    return 0;
}
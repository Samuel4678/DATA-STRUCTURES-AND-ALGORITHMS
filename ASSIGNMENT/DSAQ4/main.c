#include <stdio.h>
#include <stdlib.h>



int singleNumber(int nums[], int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }
    return result;
}

int main() {
    int nums[] = {4, 2, 1, 2, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int single = singleNumber(nums, numsSize);

    printf("Single Number: %d\n", single);

    return 0;
}


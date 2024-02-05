#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool containsDuplicate(int nums[], int numsSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    bool result = containsDuplicate(nums, numsSize);

    printf(result ? "Contains Duplicate\n" : "No Duplicate Found\n");

    return 0;
}

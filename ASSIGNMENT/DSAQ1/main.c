#include <stdio.h>
#include <stdlib.h>


int removeDuplicates(int nums[], int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int i, j = 0;
    for (i = 1; i < numsSize; i++) {
        if (nums[i] != nums[j]) {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 5, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeDuplicates(nums, numsSize);

    printf("New Length: %d\n", newLength);
    printf("Updated Array: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

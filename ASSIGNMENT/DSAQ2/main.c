#include <stdio.h>
#include <stdlib.h>


void rotate(int nums[], int numsSize, int k) {
    k %= numsSize; // Handle cases where k is greater than array size

    // Reverse the entire array
    int start = 0, end = numsSize - 1;
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }

    // Reverse the first k elements
    start = 0, end = k - 1;
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }

    // Reverse the remaining elements
    start = k, end = numsSize - 1;
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    rotate(nums, numsSize, k);

    printf("Rotated Array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

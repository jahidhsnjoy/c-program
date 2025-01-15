#include <stdio.h>

int main() {
    int nums[] = {1, 3, 5, 6};
    int numsSize = 4;
    int target;
    int left = 0, right = numsSize - 1, mid;

    printf("Enter the target: ");
    scanf("%d", &target);

    while (left <= right) {
        mid = (left + right) / 2;
        if (nums[mid] == target) {
            printf("Output: %d\n", mid);
            return 0;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("Output: %d\n", left);

    return 0;
}

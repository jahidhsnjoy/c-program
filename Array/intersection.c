#include <stdio.h>
int main() {

    int nums1[100], nums2[100], intersec[100];
    int n1, n2, i, j, k = 0;

    printf("How many numbers in nums1: ");
    scanf("%d", &n1);
    printf("Enter your numbers: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("How many numbers in nums2: ");
    scanf("%d", &n2);
    printf("Enter your numbers: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &nums2[i]);
    }

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (nums1[i] == nums2[j]) {
                int alreadyExists = 0;
                for (int m = 0; m < k; m++) {
                    if (intersec[m] == nums1[i]) {
                        alreadyExists = 1;
                        break;
                    }
                }
                if (!alreadyExists) {
                    intersec[k] = nums1[i];
                    k++;
                }
            }
        }
    }

    printf("Intersection: ");
    for (i = 0; i < k; i++) {
        printf("%d ", intersec[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n,arr[50], x, i, j, distinct = 0;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of X: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        int isUnique = 1; 

        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0; 
                break;
            }
        }

        if (isUnique) {
            distinct++; 
        }
    }

    if (distinct == x) {
        printf("Output: Good\n");
    } else if (distinct < x) {
        printf("Output: Bad\n");
    } else {
        printf("Output: Average\n");
    }

    return 0;
}

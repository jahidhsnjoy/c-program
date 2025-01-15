#include <stdio.h>

int main() {
    int ratings[5][3];
    int i, j;
    float third_std_avg=0,each_std_avg, all_std_avg = 0;

    printf("Enter the ratings for 5 students in Physics,Math and Chemistry:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &ratings[i][j]);
        }
    }

    third_std_avg = (ratings[2][0] + ratings[2][1] + ratings[2][2]) / 3.0;
    printf("\nAverage rating of 3rd student: %.2f\n", third_std_avg);

    printf("\nAverage rating of each student:\n");
    for (i = 0; i < 5; i++) {
        each_std_avg=0;
        for (j = 0; j < 3; j++) {
            each_std_avg += ratings[i][j];
        }
        each_std_avg /= 3.0;
        printf("Student %d: %.2f\n", i + 1, each_std_avg);
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            all_std_avg += ratings[i][j];
        }
    }
    all_std_avg /= 15.0;
    printf("\nOverall average rating of all students: %.2f\n",all_std_avg);

    return 0;
}

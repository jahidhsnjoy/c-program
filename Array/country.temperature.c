#include <stdio.h>
int main() {
    int num_countries=4, num_months=12;
    char cName[num_countries][100];
    int temp[num_countries][num_months];
    int maxTemp[num_countries]; 
    int minTemp[num_countries]; 
    int i, j;

    for (i = 0; i < num_countries; i++) {
        printf("Enter the name of country %d: ", i + 1);
        scanf("%s", cName[i]);

        printf("Enter the average temperatures for %s for 12 months: ", cName[i]);
        for (j = 0; j < num_months; j++) {
            scanf("%d", &temp[i][j]);
        }
    }

    for (i = 0; i < num_countries; i++) {
        maxTemp[i] = temp[i][0];
        minTemp[i] = temp[i][0];

        for (j = 1; j < num_months; j++) {
            if (temp[i][j] > maxTemp[i]) {
                maxTemp[i] = temp[i][j];
            }
            if (temp[i][j] < minTemp[i]) {
                minTemp[i] = temp[i][j];
            }
        }
    }

    printf("\nCountry Name\tHighest Temperature\tLowest Temperature\n");
    for (i = 0; i < num_countries; i++) {
        printf("%s\t\t%d\t\t\t%d\n", cName[i], maxTemp[i], minTemp[i]);
    }

    return 0;
}

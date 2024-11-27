#include <stdio.h>

int main()
{
    double sallery, year, bonus, total_sallery, tax, net_sallery;

    printf("Enter basic salary and years of service: ");
    scanf("%lf %lf", &sallery, &year);

    if (year > 10){
        bonus = sallery * 0.15;
    }
    else if (year >= 5){
        bonus = sallery * 0.10;
    }
    else{
        bonus = sallery * 0.05;
    }

    total_sallery = sallery + bonus;

    if (total_sallery > 100000){
        tax = total_sallery * 0.20;
    }
    else if (total_sallery >= 50000){
        tax = total_sallery * 0.10;
    }
    else
        tax=0;

    net_sallery = total_sallery - tax;

    printf("Net salary is: %.2lf\n", net_sallery);
    return 0;
}

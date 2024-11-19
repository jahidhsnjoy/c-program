#include <stdio.h>

int main()
{
    double age, bat_avg, catch_rea, height, bowl_avg, qualified = 0;

    printf("Enter the player age,bating avarage,catching reliability, heigyht and bowling avarage: ");
    scanf("%lf %lf %lf %lf %lf",&age, &bat_avg, &catch_rea, &height, &bowl_avg);


    if(((age<=40 && age>=25) && (bat_avg>=40) && (catch_rea >=70)) || (bat_avg >=50))
    {   
        qualified = 1;
        printf("He is qualified for batsman.\n");

    }

    if(((age<=35 && age>=20) && (height >= 5.75) && (bowl_avg <=30)) || (bowl_avg <=25))
    {   
        qualified = 1;
        printf("He is qualified for bowling.\n");
    }

    if((age<=35 && age>=25) && (bat_avg >= 20) && (catch_rea >=80))
    {   
        qualified = 1;
        printf("He is qualified for wicket keeping.\n");
    }

    if(qualified != 1)
    {   
        printf("He is not qualified.\n");
    }
    return 0;

}
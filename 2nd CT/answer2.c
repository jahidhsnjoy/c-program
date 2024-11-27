#include <stdio.h>
#include <math.h>

int main()
{   
    int check1=0,check2=0,check3=0,check4=0,check5=0, check;
    double temhigh, temmin, humidity,rainfall,sunshine;
    

    printf("Enter the TH, TM, HUM,Rain,Sun: ");
    scanf("%lf %lf %lf %lf %lf", &temhigh,&temmin, &humidity, &rainfall, &sunshine);

    if(temhigh>=31 && temhigh <=34)
    {
        check1=1;
    }
    if(temmin<=23 && temmin>=22)
    {
        check2=1;
    }
    if(humidity<=92 && humidity>=89)
    {
        check3=1;
    }
    if(rainfall<=10 && rainfall>=0)
    {
        check4=1;
    }
    if(sunshine<=9 && sunshine>=6)
    {
        check5=1;
    }

    check = check1+check2+check3+check4+check5;

    if(check>3)
    {
        printf("High.\n");
    }
    else if (check==3)
    {
        printf("Moderate.\n");
    }
    else
    {
    printf("No.\n");
    }

    
    return 0;

}
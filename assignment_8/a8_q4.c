#include<stdio.h>
int main(void){
    int year;
    int month;
    printf("Enter the month in number format: ");
    scanf("%d",&month);
    printf("\n");
    printf("Enter the year: ");
    scanf("%d",&year);
    printf("\n");
    int leap_year=0;
    if(year%400==0){
        leap_year+=1;
    }
    else if(year%4==0){
        leap_year+=1;
    }
    else if(year%100==0){
        leap_year=0;
    }
    else{
        leap_year=0;
    }
    switch (month)
    {
    case 1:
        printf("Month is January and number of days are 31.");
        break;
    case 2:
        if(leap_year==1){
            printf("Month is February and number of days are 29.");
            
        }
        else {
            printf("Month is February and number of days are 28.");

        }
        break;
    case 3:
        printf("Month is march and number of days are 31.");
        break;
    case 4:
        printf("Month is April and number of days are 30.");
        break;    
    case 5:
        printf("Month is May and number of days are 31.");
        break;
    case 6:
        printf("Month is June and number of days are 30.");
        break;
    case 7:
        printf("Month is July and number of days are 31.");
        break;
    case 8:
        printf("Month is August and number of days are 30.");
        break;
    case 9:
        printf("Month is September and number of days are 31.");
        break;
    case 10:
        printf("Month is October and number of days are 30.");
        break;
    case 11:
        printf("Month is November and number of days are 30.");
        break;
    case 12:
        printf("Month is Decemebr and number of days are 31.");
        break;
    default:
        printf("Invalid input.");
        break;

    }
    return 0;

}
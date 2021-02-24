#include<stdio.h>
int main(void){
    int year;
    printf("Enter the year:  ");
    scanf("%d",&year);
    printf("\n");
    if((year%400==0)){
        printf("LEAP YEAR ");
    }
    else if((year%4==0)){
        printf("LEAP YEAR ");
    }
    else if((year%100==0)){
        printf("NOT LEAP YEAR ");
    }
    else{
        printf("NOT LEAP YEAR ");
    }
    return 0;
    
}
#include<stdio.h>
int main(){
    /*TAKE 2 DATES AND FIND OUT WHICH IS EARLIER AMONG THE 2 INPUTS AND ALSO FIND THE DIFFERENCE BETWEEN THE TWO DATES : FORMAT dd/mm/yyyy*/
    int d1,m1,y1,d2,m2,y2;
    printf("Enter date_1: ");
    scanf("%d",&d1);
    printf("\n");
    printf("Enter date_2: ");
    scanf("%d",&d2);
    printf("\n");
    printf("Enter month_1: ");
    scanf("%d",&m1);
    printf("\n");
    printf("Enter month_2: ");
    scanf("%d",&m2);
    printf("\n");
    printf("Enter year_1: ");
    scanf("%d",&y1);
    printf("\n");
    printf("Enter year_2: ");
    scanf("%d",&y2);
    printf("\n");
    int a,b;
    if((d1>=0&&d1<=31)&&(d2>=0&&d2<=31)&&(m1>=0&&m1<=12)&&(m2>=0&&m2<=12)&&(y1>=0)&&(y2>=0)){
        a=((d1*1000000)+(m1*10000)+y1);
        b=((d2*1000000)+(m2*10000)+y2);
        if(a>b){
        printf("%d:%d:%d is earlier",d2,m2,y2);
            
        }
        else{
            printf("%d:%d:%d is earlier",d1,m1,y1);
            
        }
        int date,month,year;
        if(d1>d2){
            date=d1-d2;

        }
        else{
            date=d2-d1;
        }
        if(m1>m2){
            month=m1-m2;

        }
        else{
            month=m2-m1;
        }
        if(y1>y2){
            year=y1-y2;

        }
        else{
            year=y2-y1;
        }
        printf("\nDIFFERENCE BETWEEN THE TWO INPUT DATES ARE:%d:%d:%d",date,month,year);

    }
    else{
        printf("\nINVALID");
    }
    return 0;
}
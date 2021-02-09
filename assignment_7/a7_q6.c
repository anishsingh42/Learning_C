#include<stdio.h>
int main(){
    /*TAKE 2 TIME NUMBERS IN 24HRS FORMAT AND FIND OUT WHICH OF THE 2 REPRESENTS EARLIER TIME AND FIND THE DIFFERENCE BETWEEN THE TWO INPUTS*/
    int h1,m1,h2,m2;
    printf("Enter hour_1: ");
    scanf("%d",&h1);
    printf("\n");
    printf("Enter hour_2: ");
    scanf("%d",&h2);
    printf("\n");
    printf("Enter min_1: ");
    scanf("%d",&m1);
    printf("\n");
    printf("Enter min_2: ");
    scanf("%d",&m2);
    printf("\n");
    int a,b;
    if((h1>=0&&h1<=24)&&(h2>=0&&h2<=24)&&(m1>=0&&m1<=60)&&(m2>=0&&m2<=60)){
        a=h1*100+m1;
        b=h2*100+m2;
        if(a>b){
        printf("%d:%d is earlier",h2,m2);
            
        }
        else{
            printf("%d:%d is earlier",h1,m1);
            
        }
        int hr,min;
        if(h1>h2){
            hr=h1-h2;

        }
        else{
            hr=h2-h1;
        }
        if(m1>m2){
            min=m1-m2;

        }
        else{
            min=m2-m1;
        }
        printf("\nDIFFERENCE BETWEEN THE TWO INPUT TIME ARE:%d:%d",hr,min);
    }
    else{
        printf("\nINVALID");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    float m=0;
    scanf("%d",&a);
    if((a>=100&&a<=999)||(a>=1000&&a<=9999)||(a>=10000&&a<=99999)){
        if((a>=100&&a<=999)){
            int b,c;
            b=a%10;
            c=(a/10)%10;
            m=c;
            printf("%f",m);
            printf("\n3 digit number");
        }
        if((a>=1000&&a<=9999)){
            int d,e,f;
            d=a%10;
            e=(a/10)%10;
            m=m/10+e;
            f=(a/100)%10;
            m=(m/10+f)*10;
            printf("%f",m);
            printf("\n4 digit number");
        }
        if((a>=10000&&a<=99999)){
            int g,h,i;
            g=a%10;
            h=(a/10)%10;
            i=(a/100)%10;
            m=m/10+i;
            printf("%f",m);
            printf("\n5 digit number");
        }
    }
    else{
        printf("INVALID");
    }
    return 0;
}
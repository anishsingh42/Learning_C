#include<stdio.h>
int main(){
    /*TAKE AN INTEGER AND FIND OUT WHETHER IT S A 3 DIGIT NUMBER , 4 DIGIT NUMBER OR 5 DIGIT NUMBER.REST ALL ARE CONSIDERED INVALID*/
    int a;
    scanf("%d",&a);
    if((a>=100&&a<=999)||(a>=1000&&a<=9999)||(a>=10000&&a<=99999)){
        if((a>=100&&a<=999)){
            printf("3 digit number");
        }
        if((a>=1000&&a<=9999)){
            printf("4 digit number");
        }
        if((a>=10000&&a<=99999)){
            printf("5 digit number");
        }
    }
    else{
        printf("INVALID");
    }
    return 0;
}
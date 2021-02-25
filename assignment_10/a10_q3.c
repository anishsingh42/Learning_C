#include<stdio.h>
int main(void){
    int n,sqr;
    scanf("%d",&n);
    sqr=n*n;
    if((sqr>=1000)&&(sqr<=2500)){
        printf("%d",n);
    }
    else{
        printf("Give a input whos square is between 1000 and 2500");
    }
    return 0;
}
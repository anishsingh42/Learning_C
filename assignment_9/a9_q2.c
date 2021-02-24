#include<stdio.h>
int main(void){
    int m;
    scanf("%d",&m);//Input the number m; greater than n
    int n;
    scanf("%d",&n);//Input the number n 
    //For m-n
    while(m>=n){
        printf("%d\n",m--);
    }
    //For 5-1
    int i=5;
    while(i>=1){
        printf("%d\n",i--);
    }
    //For 30-22
    int i=30;
    while(i>=22){
        printf("%d\n",i--);
    }
    return 0;
}
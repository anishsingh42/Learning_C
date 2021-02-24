#include<stdio.h>
int main(void){
    float n;
    scanf("%f",&n);
    printf("\n");
    float sum=0;
    while(n>0){
       sum+=1/n;
       n--;
    }
    printf("%f",sum);
    
    return 0;
}
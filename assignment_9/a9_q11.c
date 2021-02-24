#include<stdio.h>
int main(void){
    float n;
    scanf("%f",&n);
    printf("\n");
    float sum=0,i=1;
    while(i<=n){
       sum+=(i-1)/i;
       i++;
    }
    printf("%f",sum);
    
    return 0;
}
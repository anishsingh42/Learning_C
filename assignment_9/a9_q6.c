#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);//Enter n till where you want the sum
    int i=0;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        
        i++;
        
        
    }
    printf("SUM:  %d\n",sum);    
    return 0;
}
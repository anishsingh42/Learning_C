#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int i=2;
    while(i<n){
        if(n%i==0){
            printf("NOT PRIME ");
            break;
            
        }
        
        i++;
    }
    if(n==i){
        printf("PRIME");
    }
    else if(n<=1){
        printf("Not a prime.");
    }
    return 0;
}
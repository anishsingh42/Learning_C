#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    printf("\n");
    int mul=1;
    while(n>0){
        mul=mul*n;
        
        n=n-3;
       
    }
    printf("%d",mul);
    return 0;
}
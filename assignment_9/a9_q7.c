#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);//Enter n till where you want the sum
    int f=1;
    int i=1;
    while(i<=n){
        f=f*i;
        i++;
    }
    printf("Factorial: %d",f); 
    return 0;
}
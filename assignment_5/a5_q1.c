#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int min;
    min=(a<b)?a:b;
    printf("%d",min);
    return 0;
}
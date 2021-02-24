#include <stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d",&a);
    int original=a;
    int reverse=0;
    b=a%10;
    reverse=reverse+b;
    c=(a/10)%10;
    reverse=reverse*10+c;
    d=(a/100)%10;
    reverse=reverse*10+d;
    e=(a/1000)%10;
    reverse=reverse*10+e;
    printf("Reverse %d\n",reverse);
    return 0;
}
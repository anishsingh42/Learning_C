#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,h;
    scanf("%d",&a);
    int original=a;

    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    e=(a/1000)%10;
    f=(a/10000)%10;
    g=(a/100000)%10;
    h=(a/1000000)%10;
    printf("Middle three digits are %d%d%d",f,e,d);
    return 0;
}
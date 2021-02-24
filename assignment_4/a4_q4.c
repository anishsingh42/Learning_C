#include <stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    e=(a/1000)%10000;
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    return 0;
}
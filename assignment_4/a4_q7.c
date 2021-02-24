#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    scanf("%d",&a);
    int original=a;

    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    e=(a/1000)%10;
    f=(a/10000)%10;
    printf("Case 1 %d%d%d%d%d\n",e,f,d,b,c);
    printf("Case 2 %d%d%d%d%d\n",c,b,d,f,e);
    printf("Case 3 %d%d%d%d%d\n",b,c,d,e,f);
    return 0;
}
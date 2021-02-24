#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i;
    scanf("%d",&a);
    int original=a;

    b=a%10;//1
    c=(a/10)%10;//2
    d=(a/100)%10;//9
    e=(a/1000)%10;//6
    f=(a/10000)%10;//4
    g=(a/100000)%10;//5
    h=(a/1000000)%10;//7
    i=(a/10000000)%10;//3
    int num_1=(h*10)+i;
    int num_2=(g*10)+f;
    int num_3=(d*10)+e;
    int num_4=(c*10)+b;
    printf(" %d\n",num_1);
    printf("+%d\n",num_2);
    printf("+%d\n",num_3);
    printf("+%d\n",num_4);
    printf("----------------\n");
    printf("%d\n",num_1+num_2+num_3+num_4);
    printf("----------------");
    return 0;
}
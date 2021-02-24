#include<stdio.h>
int main(){
    int a,b,c,d,e,f,min;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&f);
    int num1 =((a<b)&&(a<c))?a:((b<c)?b:c);
    int num2 =((d<e)&&(d<f))?d:((e<f)?e:f);
    min=(num1<num2)?num1:num2;
    printf("%d",min);
    return 0;
}
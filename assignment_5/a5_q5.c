#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d",&a);
    int original=a;
    float middle=0;
    float edge=0;
    b=a%10;
    edge=edge/10+b;
    c=(a/10)%10;
    middle=middle/10+c;
    d=(a/100)%10;
    middle=(middle/10+d)*10;
    e=(a/1000)%10;
    edge=(edge/10+e)*10;
    printf("MIDDLE%f\n",middle);
    printf("EDGE%f\n",edge);
    int sqr;
    sqr=middle*middle;

    int check = (sqr==edge)?printf("VALID"):printf("NOT VALID");
    
}
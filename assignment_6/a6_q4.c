#include<stdio.h>
int main(void){
 /*Take 2 unsigned characters {
 A=0010 1011
 B=1100 1001
 } Interchange 1011 of A with 1100 of B.*/
    char a,b,c,d,e,f;
    printf("Enter a character 1");
    scanf("%c",&a);
    printf("\n");
    printf("Enter a character 2");
    scanf("%c",&b);
    printf("\n");
    c=a&0XF0;
    printf("1(i): %x\n",c);
    d=a&0X0F;
    d=d<<4;
    printf("1(ii): %x\n",d);
    e=b&0XF0;
    e=e>>4;
    printf("2(i): %x\n",e);
    f=b&0X0F;
    printf("2(ii): %x\n",f);
    char g,h;
    g=c|e;
    h=d|f;
    printf("A: %d\nB: %d",g,f);
    return 0;
    
    
}
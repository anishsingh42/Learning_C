#include<stdio.h>
int main(void){
    /*Take an integer from user and display its each and every byte.*/
    int a,b,c,d,e;
    printf("Enter an integer");//a=
    scanf("%d",&a);
    printf("\n");
    printf("A: %x\n",a);
    b=a&0X000000FF;
    printf("B: %x\n",b);
    c=a&0X0000FF00;
    c=c>>8;
    printf("C: %x\n",c);
    d=a&0X00FF0000;
    d=d>>16;
    printf("D: %x\n",d);
    e=a&0XFF000000;
    e=e>>24;
    printf("E: %x\n",e);
    return 0;
    
    
}
#include<stdio.h>
int main(void){
    /*Take 4 integer ABCD and display ACBD.*/
    int num,a,b,c,d;
    printf("Enter an integer");
    scanf("%d",&num);
    printf("\n");
    printf("NUM HEXDECIMAL : %x\n",num);
    //00010100(A) 00101000(B) 00100010(C) 00100000(D)------Eg:
    a=num&0XFF000000;
    printf("A: %x\n",a);
    b=num&0X0000FF00;
    c=c>>8;
    printf("B: %x\n",b);
    c=num&0X00FF0000;
    d=d<<8;
    printf("C: %x\n",c);
    d=num&0X000000FF;
    printf("D: %x\n",d);
    
    int e;
    e=a|b|c|d;
    printf("E: %x\n",e);
    return 0;
}
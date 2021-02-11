#include<stdio.h>
int main(void){
    /*Take a character input and then:
	i) Show its 4 left most bits and 4 right most bits
	ii) Interchange the left most bits with the right most bits and print.*/
    char a,b,c,d,e;
    printf("Enter a character 1");
    scanf("%c",&a);
    printf("Input: %x\n",a);
    b=a&0XF0;
    b=b>>4;
    printf("Left most 4 bits are: %x\n",b);
    c=a&0X0F;
    
    printf("Right most 4 bits: %x\n",c);
    c=c<<4;
    e=b|c;
    printf("After interchanging %x\n",e);
    return 0;
    
    
}
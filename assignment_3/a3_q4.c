#include<stdio.h>
int
main ()
{
    int x=2,y=3,a;
    a=x*x + 3*x*x*x*y + 4*x*y - 4*y+ 7;    
    printf("x^2 + 3x^3y+4xy - 4y + 7 = ");
    printf("%d",a);
    return 0; 
}

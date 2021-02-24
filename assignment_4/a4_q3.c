#include <stdio.h>
int main(){
    int a,b,c;
    printf(" Type a: ");
    scanf("%d",&a);
    
    printf(" Type b: ");
    scanf("%d",&b);
    
    c = (a+b)*(a+b)*(a+b);
    printf("Answer %d",c);
    
    float d,e,f;
    printf(" Type d: ");
    scanf("%d",&d);
    
    printf(" Type e: ");
    scanf("%d",&e);
    
    f = (d+e)*(d+e)*(d+e);
    printf("Answer %d",f);
    return 0;
}
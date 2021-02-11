#include<stdio.h>
int main(){
    /*FIND THE SECOND MINIMUM AMONG THREE NUMBERS USING ONLY AND ONLY TERNARY OPERATORS */
    int a,b,c;
    printf("ENTER NUMBER 1 ");
    scanf("%d",&a);
    printf("ENTER NUMBER 2 ");
    scanf("%d",&b);
    printf("ENTER NUMBER 3 ");
    scanf("%d",&c);
    int min_sec;
    int d=(a<b)?a:b;
    printf("%d\n",d);
    min_sec=(d<c)?c:d;
    printf("SECOND MINIMUM  %d",min_sec);
    return 0;
}
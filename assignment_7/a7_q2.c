#include<stdio.h>
int main(){
    /*FIND THE MAXIMUM AMONG 4 NUMBERS USING ONLY AND ONLY IF_ELSE STATEMENT*/
    int a,b,c,d;
    printf("!st number: ");
    scanf("%d",&a);//2
    printf("\n");
    printf("2nd number: ");
    scanf("%d",&b);//3
    printf("\n");
    printf("3rd number: ");
    scanf("%d",&c);
    printf("\n");//4
    printf("4th number: ");
    scanf("%d",&d);//5
    printf("\n");
    int x,y;
    if(a>b){
        //2>3
        x=a;//break
    }
    else{
        x=b;//x=3
    }
    if(d>c){
        //4>5
        y=d;//break
    }
    else{
        //y=5
        y=c;
    }
    int max_1;
    if(x>y){
        max_1=x;
    }
    else{
        max_1=y;
    }
    printf("The maximum digis is %d ",max_1);
    return 0;
}
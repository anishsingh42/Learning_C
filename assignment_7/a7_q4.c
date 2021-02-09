#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=0){
        if(a==0){
        printf("Input is zero");
        }
        else{
            printf("+ve");
        }    
    }
    else{
        printf("-ve");
    }
    
    return 0;
}
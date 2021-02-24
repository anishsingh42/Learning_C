#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);//Input the number n 
    int i=0;
    //For 0-n
    while(i<=n){
        printf("%d\n",i++);
    }
    //For 0-10
    while(i<=10){
        printf("%d\n",i++);
    }
    return 0;
}
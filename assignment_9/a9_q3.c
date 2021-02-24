#include<stdio.h>
int main(void){
    int m;
    scanf("%d",&m);//Input the number m
    int n;
    scanf("%d",&n);//Input the number n 
    //For m-n
    if(m>n){
        while(m>=n){
        printf("%d\n",m--);
        }
    }
    else if(n>m) {
        while(n>=m){
        printf("%d\n",m++);
        }
    }
    else{
        printf("Both are same input");
    }
    
   
    return 0;
}
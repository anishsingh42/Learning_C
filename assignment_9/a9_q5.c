#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);//Enter n whos table you want 
    int i=1;
    while(i<=10){
        printf("%d\n",n*i);
        i=i+1;
        
        
    }
    
    return 0;
}
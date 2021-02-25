#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0,a,sum=0;
    while(i<n){
        scanf("%d",&a);
        if((a%3==0)||(a%5==0)){
            sum+=a;
            printf("%d\n",sum);
            
            
        }
        
        i++;
    }
    printf("%d",sum);
    return 0;
}
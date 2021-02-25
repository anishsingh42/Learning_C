#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0,a,mul=1;
    while(i<n){
        scanf("%d",&a);
        if(a%2!=0){
            mul*=a;
            printf("%d\n",mul);
            
            
        }
        else if(a==0){
            break;
        }
        i++;
    }
    if(mul==1){
        printf("Array was full of even numbers or zero.");
    }
    else{
        printf("%d",mul);
    }
    
    return 0;
}
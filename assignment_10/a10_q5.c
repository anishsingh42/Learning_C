#include <stdio.h>

int main() {
	int n;
	float i,b,fact;
	scanf("%d",&n);
	float sum=1;
	for(i=1;i<=n;i+=1){
	    for(b=1,fact=1;b<=i;b+=1){
	        fact*=b;
	        printf("%f\n",fact);
	        
	    }
	    sum=sum+((i+1)/fact);
	}
	printf("SUM: %f",sum);
	
	return 0;
}
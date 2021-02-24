#include<stdio.h>
int main(){
	float a;//19.3456
	printf("Enter a 4 decimal places digit real number \n");
	scanf("%f",&a);
	int b,check_1,last_digit;
	b=a*10000;//193456
	check_1=b/100;//193.456
	last_digit=(b%100)/10;//5.6
	(last_digit>=5)?++check_1:check_1;
	printf("%f",check_1/100.0);
	return 0;
}
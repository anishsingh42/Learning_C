#include<stdio.h>
int main(){
	int a,last_digit,Check_1;
	printf("Enter any 4 digit integer\n");
	scanf("%d",&a);
	last_digit=a%10;
	Check_1=a/10;
	(last_digit>=5)?printf("%d",(++Check_1)*10):printf("%d",Check_1*10);
	return 0;
}
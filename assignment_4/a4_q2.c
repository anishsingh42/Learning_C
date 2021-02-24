#include <stdio.h>
#include <math.h>

int main()
{
	unsigned short int a;
	printf("Write Value of unsigned short int: ");
	scanf("%hu", &a);
	printf("value of unsigned short int is %hu\n", a);
	unsigned int b;
	printf("Write Value of Unsigned int b: ");
	scanf("%u", &b);
	printf("value of unsigned int is %u\n", b);
	unsigned long c;
	printf("Write the value of unsigned long: ");
	scanf("%lu", &c);
	printf("value of unsigned long %lu\n", c);
	unsigned long long d;
	printf("Write Value of Unsigned long long integer: ");
	scanf("%llu", &d);
	printf("Value of unsigned long long %llu\n", d);
	short int e;
	printf("Write Value for Short int: ");
	scanf("%hd", &e);
	printf("Value of short int is %hd\n", e);
	int f = c;
	printf("Value of int is %d\n", f);
	long g = e;
	printf("Value of long is %ld\n", g);
	long long h = a;
	printf("Value of long long is %lld\n", h);
	float i = b;
	printf("Value of float is %f\n", i);
	double j = a;
	printf("Value of double is %lf\n", j);
	long double k = c;
	printf("Value of long double is %Lf\n", k);
	unsigned long l = j;
	printf("Value of unsigned long is %lu\n", l);
	int n;
	printf("Write a number to find a character: ");
	scanf("%d", &n);
	printf("Value of integer n is %c", n);
	return 0;
}

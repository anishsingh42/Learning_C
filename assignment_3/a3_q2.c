#include <stdio.h>

int main() {
    char a;
    printf("ASCII value from A to J \n");
    for(a='A';a<='J';a++){
        printf("%d \n",a);
    }
    char A;
    printf("ASCII value from a to j \n");
    for(A='a';A<='j';A++){
        printf("%d \n",A);
    }
    char b='\v';
    printf("ASCII value of '\\v' is %d\n",b);
    char c='\r';
    printf("ASCII value of '\\r' is %d\n",c);
    char d='\n';
    printf("ASCII value of '\\n' is %d\n",d);
    char e='\b';
    printf("ASCII value of '\\b' is %d\n",e);
	return 0;
}
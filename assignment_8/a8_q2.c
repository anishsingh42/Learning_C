
#include<stdio.h>
int main(void){
    int a;
    printf("Enter the 2 digit number:  ");
    scanf("%d",&a);
    printf("\n");
    int num_1,num_2;
    num_1=a%10;
    num_2=(a/10)%10;
    switch(num_2){
        case 2:
            printf("Twenty");
            break;
        case 3:
            printf("Thirty");
            break;
        case 4:
            printf("Forty");
            break;
        case 5:
            printf("Fifty");
            break;
        case 6:
            printf("Sixty");
            break;
        case 7:
            printf("Seventy");
            break;
        case 8:
            printf("Eighty");
            break;
        case 9:
            printf("Ninety");
            break;
    }
    switch(num_1){
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        case 0:
            printf(" ");
            break;
    }
    return 0;
    
}
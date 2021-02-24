#include<stdio.h>
int main(void){
    int pr_1,pr_2,pr_3;
    printf("Enter Price of 1st item:$ ");
    scanf("%d",&pr_1);
    printf("\n");
    printf("Enter Price of 2nd item:$ ");
    scanf("%d",&pr_2);
    printf("\n");
    printf("Enter Price of 3rd item:$ ");
    scanf("%d",&pr_3);
    printf("\n");
    int total_amt,discount;
    total_amt=pr_3+pr_1+pr_2;
    if(total_amt>=6000){
        if(((pr_2+pr_3)>=5000)||((pr_1+pr_3)>=5000)||((pr_2+pr_1)>=5000)){
            discount=total_amt*0.5;
            printf("Total amount of your order after 50%% discount:$ %d",discount);
        }
        else{
            discount=total_amt*0.4;
            printf("Total amount of your order after 40%% discount:$ %d",discount);
        }
    }
    
    else if(total_amt>=4000){
        if(((pr_2+pr_3)>=3000)||((pr_1+pr_3)>=3000)||((pr_2+pr_1)>=3000)){
            discount=total_amt*0.4;
            printf("Total amount of your order after 40%% discount:$ %d",discount);
        }
        else{
            discount=total_amt*0.3;
            printf("Total amount of your order after 30%% discount:$ %d",discount);
        }
    }
    else if(total_amt>=2000){
        discount=total_amt*0.2;
        printf("Total amount of your order after 20%% discount:$ %d",discount);
    }
    else{
        printf("Total amount of your order:$ %d",total_amt);
    }
    return 0;

} 
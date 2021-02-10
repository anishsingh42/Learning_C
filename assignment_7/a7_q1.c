#include<stdio.h>
int main(){
    /*GIVEN 4 NUMBERS,FIND SECOND MAXIMUM NUMBER USING ONLY AND ONLY IF-ELSE STATEMENT*/
    int a,b,c,d;
    printf("Enter first number");
    scanf("%d",&a);
    printf("\n");
    printf("Enter second number");
    scanf("%d",&b);
    printf("\n");
    printf("Enter third number");
    scanf("%d",&c);
    printf("\n");
    printf("Enter fourth number");
    scanf("%d",&d);
    printf("\n");
    int max_1,max_2;
    if((a>b)&&(a>c)&&(a>d)){
        max_1=a;
        if((b>c)&&(b>d)){
            max_2=b;
        }
        else{
            if((c>b)&&(c>d)){
                max_2=c;
            }
            else{
                max_2=d;
            }
        }
    }
    else{
        if((b>a)&&(b>c)&&(b>d)){
            max_1=b;
            if((a>c)&&(a>d)){
                max_2=a;
            }
            else{
                if((c>a)&&(c>d)){
                    max_2=c;
                }
                else{
                    max_2=d;
                }
            }
        
        }
        else{
            if((c>a)&&(c>b)&&(c>d)){
                max_1=c;
                if((a>b)&&(a>d)){
                    max_2=a;
                }
                else{
                    if((b>a)&&(b>d)){
                        max_2=b;
                    }
                    else{
                        max_2=d;
                    }
                }
            }
            else{
                if((d>a)&&(d>b)&&(d>c)){
                max_1=d;
                if((a>c)&&(a>c)){
                    max_2=a;
                }
                else{
                    if((c>a)&&(c>b)){
                        max_2=c;
                    }
                    else{
                        max_2=b;
                    }
                }
            }
            }
        }
    }
    printf("Second Max number:%d",max_2);
    return 0;
}

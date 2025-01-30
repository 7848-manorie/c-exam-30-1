/*write a c program to simulate a simple calculator that performs addition,subtraction,multiplication,division*/
#include<stdio.h>

int main(){
    int choice;
        int num1,num2,result;

        printf("\n\nPress 1 for addition(+)");
        printf("\nPress 2 for subtraction(-)");
        printf("\nPress 3 for multiplication(*)");
        printf("\nPress 4 for division(/)");
        printf("\nPress 5 for modulus(%)");
        printf("\nPress 0 for exit");
        printf("\n\nenter your choice:");
        scanf("%d",&choice);

        printf("enter the first number:");
        scanf("%d",&num1);
        printf("enter the second number:");
        scanf("%d",&num2);

        switch(choice){
            case 1:
                result=num1+num2;
                printf("the addition of %d + %d =:%d",result);
                break;
            case 2:
                result=num1-num2;
                printf("\nthe subtraction of %d - %d =:%d",result);
                break;
            case 3:
                result=num1*num2;
                printf("\nthe multiplication of %d * %d =:%d",result);
                break;
            case 4:
                result=num1/num2;
                printf("\nthe division of %d / %d =:%d",result);
                break;
            default:
                printf("\nInvalid choice !!");
        }
    return 0;
}

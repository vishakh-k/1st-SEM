#include <stdio.h>

int main(){
    char opr;
    int num1,num2,result;
    printf("Simple calculator\n");
    printf("Availabale operations:\n");
    printf("----------------------\n");
    printf("Addition:\n");
    printf("Substraction:\n");
    printf("Multiplication:\n");
    printf("Division:\n");
    printf("----------------------\n");
    printf("Enter an operation");
    scanf("%c",&opr);
    printf("Enter two numbers");
    scanf("%d %d",&num1,&num2);
    switch(opr){
        case '+': 
            result=num1+num2;
            printf("Addtion of two numbers %d",result);
            break;
        case '-': 
            result=num1-num2;
            printf("Substraction of two numbers %d",result);
            break;
        case '*': 
            result=num1*num2;
            printf("Multiplication of two numbers %d",result);
            break;
        case '/': 
            if(num2<=0){
                printf("Division is not possible");
            }else{
                result=num1/num2;
                printf("Division of two numbers %d",result);
            }
            break;
        default:
            printf("Invalid operation");
    }
    return 0;
}
#include<stdio.h>
int main() {
int choice;
float num1, num2, result;
printf("simple calculator");
printf("1 addition \n");
printf("2 subtration\n");
printf("3 multiplication \n");
printf("4 division \n");
printf(" enter a number");
scanf("%f%F, & num1, num2");
switch (choice){
    case 1:
    result=num1 + num2;
    printf("result=%.2f", &result);
    break;
    case 2:
    result=num1 - num2;
    printf("result =%.2f",&result);
    break;
    case 3:
    result=num1 * num2;
    printf("result =%.2f", &result);
    break;
    case 4:
    if (num2!=0)
    printf("result =%.2f", num1/num2);
    break;
    default:
    printf("wrong choice");
    
}
    return 0;
}
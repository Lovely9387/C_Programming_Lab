#include<stdio.h>
int main()
{
    float number1, number2, result;

    printf("1 - addition \n");
    printf("2 - substraction \n");
    printf("3 - multiplication \n");
    printf("4 - division \n");

    int operator;

    printf("Enter a number (1-4): ");
    scanf("%d", &operator);

    printf("Enter the first number : ");
    scanf("%f", &number1);

    printf("Enter the second number : ");
    scanf("%f", &number2);

    switch(operator){
        case 1:
        result = number1 + number2;
        printf("result = %.2f \n", result);
        break;
        case 2:
        result = number1 - number2;
        printf("result = %.2f \n", result);
        break;
        case 3:
        result = number1 * number2;
        printf("result = %.2f \n", result);
        case 4:
        result = number1 / number2;
        if (number2 == 0){
            printf("result = not defined \n");
        } else {printf("result = %.2f\n", result);}
        break;
        default : printf("not a valid input");
        
    }
    return 0;
}
#include<stdio.h>
int main()
{
    // This is a program to determine whether the input number is positive, negative or zero.
    float number;

    printf("Enter any number = ");
    scanf("%f", &number);

    if (number > 0){
        printf("Positive");
    }
    else if (number < 0){
        printf("Negative");
    }
    else {
        printf("Zero");
    }
    return 0;
}
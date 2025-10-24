#include<stdio.h>
int main()
{
    // This is a program to check whether a given year is a leap year or not.

    int year;

    printf("Enter any year = ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if (year % 400 == 0){
                printf("Leap Year");
            }
            else{
                printf("Not a Leap Year"); 
            }
            } 
        else{
            printf("Leap Year");
        }
        } 
    else{
        printf("Not a Leap Year");
    }
    return 0;

}
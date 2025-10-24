#include<stdio.h>
int main()
{
    // This is a program to check whether a number is by both 5 and 11 or not.

    int n;

    printf("Enter a number, n = ");
    scanf("%d", &n);

    if( n % 5 == 0 && n % 10 == 0){
        printf("%d is divisible", n);
    } 
    else {
        printf("Not divisible");
    }
    return 0;

}
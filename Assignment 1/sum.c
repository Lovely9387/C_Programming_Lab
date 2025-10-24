#include<stdio.h>
int main()
{
    // This is a program to calculate the sum of first n natural numbers.

    int n;

    printf("Enter any natural number,n  = ");
    scanf("%d", &n);

    float sum;
    
    sum = (n * (n+1))/2;
    
    printf("Sum of first %d natural numbers = %f",n, sum);

    return 0;

}
#include<stdio.h>
int main()
{
    int n, i, x, sum = 0;
    float average;
    printf("Enter any number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Enter a number :");
        scanf("%d", &x);
        sum = sum + x;
        average = sum/n ;
    } printf("Sum = %d and Average = %.2f", sum,average);
    return 0;

}
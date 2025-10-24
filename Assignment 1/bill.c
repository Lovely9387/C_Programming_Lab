#include<stdio.h>
int main()
{
    // This is a program to find out the total electricity bill.

    float n, bill;

    printf("Enter the value of electricity units consumed ,n = ");
    scanf("%f", &n );

    if (0<n && n<=100){
        bill = n * 1.5;
        printf("Total bill (in Rs) = %.2f", bill );
    } 
    else if (100<n && n<=200) {
        bill = (150 + ((n - 100) * 2) ) ;
        printf("Total bill (in Rs) = %.2f", bill);
    } 
    else if (200<n && n<=300){
        bill =(200 + 150 + ((n - 200) * 3) );
        printf("Total bill (in Rs) = %.2f", bill);
    } 
    else if (300<n) {
        bill = (300 + 200 + 150 + ((n - 300) * 5)) ;
        printf("Total bill (in Rs) = %.2f", bill); 
    } 
    else {
        printf("Total bill (in Rs) = 0");
    }
    return 0;   
}
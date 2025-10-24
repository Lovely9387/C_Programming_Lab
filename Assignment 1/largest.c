#include<stdio.h>
int main()
 {
    // This is a program to determine which one of the three input numbers is largest.

    float n1, n2, n3;

    printf("Enter the first number, n1 : ");
    scanf("%f", &n1);

    printf("Enter the second number, n2 : ");
    scanf("%f", &n2);

    printf("Enter the third number, n3 : ");
    scanf("%f", &n3);

    if (n1>n2 && n2>=n3){
        printf("The largest number is n1");
    } 
    else if (n3>n1 && n1>=n2){
        printf("The largest number is n3 ");
    } 
    else if (n2>n1 && n1>=n3){
        printf("The largest number is n2 ");
    } 
    else if (n2>=n1 && n1>n3){
        printf("The largest numbers are n1 & n2");
    }
    else if (n1>=n3 && n3>n2){
        printf("The largest numbers are n1 & n3  ");
    }
    else if (n2>=n3 && n3>n1){
        printf("The largest number is n2 & n3 ");
    }
    else {
        printf("Numbers are same");
    } 
    return 0;
}
#include<stdio.h>
int main()
{
    int num, i = 0;
    printf("Enter any number : ");
    scanf("%d", &num);
    if(num==0)
    {
        printf("Digit = 1");
    } else {
        while(num != 0)
        {
            num = num/10;
            i++;
        }
    }
    printf("Number of digits = %d", i);
    return 0;
}
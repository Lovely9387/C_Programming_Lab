#include<stdio.h>

int main(){
    float temperature;

    printf("Enter value of machine temperature in degree celsius : ");
    scanf("%f", &temperature);


    if(60 < temperature && temperature <= 80){
        printf("SAFE");
    } else{
        printf("WARNING");
    }

    
    return 0;
}
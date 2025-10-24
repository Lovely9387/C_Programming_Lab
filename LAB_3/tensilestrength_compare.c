#include<stdio.h>

int main(){
    float TensileStrength1, TensileStrength2;
    printf("Enter value of tensile strength 1 : ");
    scanf("%f", &TensileStrength1);
    printf("Enter value of tensile strength 2 : ");
    scanf("%f", &TensileStrength2);

    if(TensileStrength1 > TensileStrength2){
        printf("Tensile Strength 1");
    } else if (TensileStrength1 < TensileStrength2){
        printf("Tensile Strength 2");
    } else{
        printf("Both the tensile strengths are same");
    }

    
    return 0;
}
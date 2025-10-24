#include<stdio.h>
int main(){
    float AppliedStress, MaterialYield;
    printf("Applied Stress (MPa) = ");
    scanf("%f", &AppliedStress);
    printf("Material Yield Strength (MPa) = ");
    scanf("%f", &MaterialYield);

    //fos = facter of safety
    float fos;
    fos = MaterialYield / AppliedStress;
    
    if (fos<1.5){
        printf("Danger redesign needed");
    } else if (1.5<=fos && fos<2.0){
        printf("Acceptable with monitoring");
    } else {printf("Safe design");
    }
    
    return 0;
}
#include<stdio.h>

int main(){
    float mass, velocity, KineticEnergy;
    printf("Enter value of mass in kg = ");
    scanf("%f", &mass);
    printf("Enter value of velocity in m/s = ");
    scanf("%f", &velocity);

    KineticEnergy = 0.5 * mass * velocity *velocity;
    printf("Kinetic Energy = %f J", KineticEnergy);

    return 0;
}
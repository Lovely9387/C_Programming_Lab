#include<stdio.h>

int main(){
    float mass, acceleration;
    printf("Enter value of mass in kg = ");
    scanf("%f", &mass);
    printf("Enter value of acceleration in m/s^2 = ");
    scanf("%f", &acceleration);

    float force;
    force = mass * acceleration;
    printf("Force = %f N", force);

    return 0;
}
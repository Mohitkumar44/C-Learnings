#include <stdio.h>
float force(float mass){
    return mass*9.8;;
}
int main(){
    float mass=50;
    printf("Force Exerted by Earth on the body of mass %.2f KG is %.2f N",mass,force(mass));
    return 0;
}
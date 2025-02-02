#include <stdio.h>
float converter(float temp);

float converter(float temp){
    return ((9/5.0)*temp)+32;
}
int main(){
    float temp = -40;
    printf("%.2f degree celcius C in Fahrenheit is %.2f",temp,converter(temp));
    return 0;
}
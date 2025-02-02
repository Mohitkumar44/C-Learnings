// Fahrenheit=(Celsius × 9/5 )+32

#include <stdio.h>
int main(){
    float c,f;
    printf("Enter temp. in celcius : ");
    scanf("%f",&c);
    f = (9.0/5.0)*c + 32;
    printf("%f°C in fahrenheit is %f",c,f);
    return 0;
}
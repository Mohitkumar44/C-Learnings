#include <stdio.h>
int main(){
    int radius;
    printf("Enter radius of that circle : ");
    scanf("%d",&radius);
    printf("Area of circle with radius %d is %f",radius,3.14*radius*radius);
    return 0;
}
#include <stdio.h>
int main(){
    int height,radius;
    printf("Enter height of that cylinder : ");
    scanf("%d",&height);
    printf("Enter radius of that cylinder : ");
    scanf("%d",&radius);
    printf("Volume of cylinder with radius %d and height %d is %f",radius,height,3.14*radius*radius*height);
    return 0;
}
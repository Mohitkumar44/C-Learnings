#include <stdio.h>
int main(){
    int year;
    printf("Enter Year to check : ");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0 || year%400==0){
        printf("You entered a leap year");
    }
    else {
        printf("You entered a non leap year");
    }
    return 0;
}
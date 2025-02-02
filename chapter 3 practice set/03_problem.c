#include <stdio.h>
int main(){
    int income;
    printf("Enter Your Income : ");
    scanf("%d",&income);
    if (income>1000000){
        float tax =income*(30.0/100);
        printf("Your Tax should be %f",tax);
    }
    else if (income>500000){
        float tax = income*(20.0/100);
        printf("Your Tax should be %f",tax);
    }
    else if (income>250000){
        float tax = income*(5.0/100);
        printf("Your Tax should be %f",tax);
    }
    else{
        printf("Your are Tax free");
    }
    return 0;
}
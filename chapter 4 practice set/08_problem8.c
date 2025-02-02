#include <stdio.h>
int main(){
    int number;
    printf("Enter number to calculate factorial : ");
    scanf("%d",&number);
    int factorial=1;
    for (int i = number; i; i--)
    {
        factorial*=i;
    }
    printf("The factorial of %d is %d",number,factorial);
    return 0;
}
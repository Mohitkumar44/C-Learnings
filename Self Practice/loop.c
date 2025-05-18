// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,digit=0;
    printf("Enter your number : ");
    scanf("%d",&num);
    
    while(num!=0){
        digit = num%10;
        printf("%d",digit);
        num/=10;
    }

    return 0;
}
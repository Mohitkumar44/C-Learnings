#include <stdio.h>
int main()
{
    int quotient= 0,num,divisor;
    printf("Enter the Number : ");
    scanf("%d", &num);
    printf("Enter Divisor Value : ");
    scanf("%d",&divisor);
    while (num>=divisor)
    {
        num -= divisor;
        quotient++;
    }
    printf("Value of quotient is : %d",quotient);
    return 0;
}
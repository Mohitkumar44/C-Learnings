// #include <stdio.h>
// int main(){
//     int number;
//     printf("Enter number to calculate factorial : ");
//     scanf("%d",&number);
//     int factorial=1;
//     // for (int i = number; i; i--)
//     // {
//     //     factorial*=i;
//     // }
//     while (number>0)
//     {
//         factorial*=number;
//         number--;
//     }
//     printf("The factorial of given number is %d",factorial);
//     return 0;
// }

#include <stdio.h>
int main(){
    int number;
    printf("Enter number to calculate factorial : ");
    scanf("%d",&number);
    int i =1;
    int factorial=1;
    while (i<=number)
    {
        factorial*=i;
        i++;
    }
    printf("The factorial of %d is %d",number,factorial);
    return 0;
}
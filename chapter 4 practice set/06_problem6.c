// #include <stdio.h>
// int main(){
//     int sum = 0;
//     for (int i=1;i<=10;i++){
//         sum+=i;
//     }
//     printf("The Sum of first 10 natural numbers is : %d",sum);
//     return 0;
// }

#include <stdio.h>
int main(){
    int sum = 0;
    int i=1;
    do
    {
        sum+=i;
        i++;
    } while (i<=10);
    
    printf("The Sum of first 10 natural numbers is : %d",sum);
    return 0;
}
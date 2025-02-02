#include <stdio.h>
int main(){
    int sum = 0;
    int i=1;
    while (i<=10){
        sum+=i;
        i+=1;
    }
    printf("The Sum of first 10 natural numbers is : %d",sum);
    return 0;
}
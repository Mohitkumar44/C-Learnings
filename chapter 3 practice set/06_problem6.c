#include <stdio.h>
int main(){
    int first,second,third,fourth;
    printf("enter first number : ");
    scanf("%d",&first);
    printf("enter second number : ");
    scanf("%d",&second);
    printf("enter third number : ");
    scanf("%d",&third);
    printf("enter fourth number : ");
    scanf("%d",&fourth);
    if (first>=second && first>=third && first>=fourth){
        printf("greatest no. is %d",first);
    }
    if (second>=first && second>=third && second>=fourth){
        printf("greatest no. is %d",second);
    }
    if (third>=second && third>=first && third>=fourth){
        printf("greatest no. is %d",third);
    }
    if (fourth>=second && fourth>=third && fourth>=first){
        printf("greatest no. is %d",fourth);
    }
    return 0;
}
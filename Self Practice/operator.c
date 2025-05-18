#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    int greater = a>b?a:b;
    printf("%d",greater);

    // if (a>=b)
    // {
    //     printf("%d is greater",a);
    // }
    // else{
    //     printf("%d is greater",b);
    // }
    
    return 0;
}
#include <stdio.h>
int sum(int a,int b);
int sum(int a,int b){
    printf("the value of c is : %d",a+b);
}
int main() {
    int a,b,c;
    printf("Enter the value of a and b respectively : ");
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}
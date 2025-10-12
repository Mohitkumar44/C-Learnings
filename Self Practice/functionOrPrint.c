#include<stdio.h>
int value(int b){
    b = 20;
    printf("Second number is %d ",b);
    return b;
}
int main(){
    int a=10,b;
    printf("first number is %d and %d is the second number",a,value(b));
    return 0;
}
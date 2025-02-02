#include <stdio.h>
int main(){
    int a = 7;
    int* b = &a;
    printf("The address of a is %u and the value of a is %d",b,*b);
    return 0;
}
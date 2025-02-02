#include <stdio.h>
int main(){
    int i=7;
    int *ptr=&i;
    printf("the value of ptr is %u\n",ptr);
    ptr=ptr-1;
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %u\n",ptr);
    return 0;
}
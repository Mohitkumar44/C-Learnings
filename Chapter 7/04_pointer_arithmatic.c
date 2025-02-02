#include <stdio.h>
int main(){
    // this is for integer

    // int a = 4;
    // int * ptr = &a;
    // printf("The address of a is %u\n",&a);
    // printf("The address of a is %u\n",ptr);
    // ptr++;
    // printf("The address of a is %u\n",ptr);
    // return 0;

    char a = 'A';
    char * ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr++;
    printf("The address of a is %u\n",ptr);
    return 0;
}
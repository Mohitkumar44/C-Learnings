#include <stdio.h>
int fuct(int* j);

int fuct(int* k){
    printf("the address of the passed value to that fuction is %u",k);
    return 4;
}

int main(){
    int i = 1;
    int * j = &i;
    printf("The address of i is %u\n",j);
    fuct(j);
    return 0;
}
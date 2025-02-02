#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=6;
    int *ptr;
    ptr = (int*) malloc(n*sizeof(int));
    ptr[0]=145221322;
    ptr[1]=14525;
    ptr[2]=5323;
    ptr[3]=344234;
    ptr[4]=63425;
    ptr[5]=243425;
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}
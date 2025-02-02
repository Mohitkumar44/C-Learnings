#include <stdio.h>
#include <stdlib.h>
int main(){
    float n=5;
    float *ptr;
    ptr = (float*)malloc(n * sizeof(float));
    ptr[0]=12.4545;
    ptr[1]=23.8345;
    ptr[2]=65.3445;
    ptr[3]=84.9745;
    ptr[4]=38.0145;
    printf("%0.2f\n%0.2f\n%0.2f\n%0.2f\n%0.2f\n",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);
    free(ptr);
    return 0;
}
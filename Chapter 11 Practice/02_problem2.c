#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=6;
    int *ptr;
    ptr = (int*) malloc(n*sizeof(int));
    for (int j = 0; j < n; j++)
    {
        printf("Enter your number : ");
        scanf("%d",&ptr[j]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("You entered %d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}
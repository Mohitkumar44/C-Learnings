#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=5;
    int *ptr;
    ptr = (int*) malloc(n*sizeof(int));
        for (int j = 0; j < n; j++)
    {
        printf("Enter your number : ");
        scanf("%d",&ptr[j]);
    }
    printf("The array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("You entered %d\n",ptr[i]);
    }
    n=10;
    ptr = (int*) realloc(ptr,n*sizeof(int));
        for (int j = 0; j < n; j++)
    {
        printf("Enter your number : ");
        scanf("%d",&ptr[j]);
    }
    printf("The array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("You entered %d\n",ptr[i]);
    }
    return 0;
}
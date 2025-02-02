#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    ptr[0]=3;
    printf("%d",ptr[0]);
    free(ptr);
    return 0;
}
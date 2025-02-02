#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int j = 1; j <= n; j++)
    {
        ptr[j] = 7 * j;
    }
    printf("The array is \n");
    for (int i = 1; i <= n; i++)
    {
        printf("7 x %d = %d\n", i, ptr[i]);
    }
    n = 15;
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int j = 1; j <= n; j++)
    {
        ptr[j] = 7 * j;
    }
    printf("The reallocated array is \n");
    for (int i = 1; i <= n; i++)
    {
        printf("7 x %d = %d\n", i, ptr[i]);
    }
    return 0;
}
// Repeat problem 3 for a general input provided by the user using scanf.
#include <stdio.h>
int main(){
    int number;
    printf("Enter Number to store a table : ");
    scanf("%d",&number);
    int array[number];
    for (int i = 1; i < 11; i++)
    {
        array[i-1]=number*i;
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d\n",array[j]);
    }
    
    return 0;
}
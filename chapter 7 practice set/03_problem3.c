// Write a program to create an array of 10 integers and store multiplication table of 
// 5 in it. 
#include <stdio.h>
int main(){
    int array[10];
    for (int i = 1; i < 11; i++)
    {
        array[i-1]=5*i;
    }
    for (int j = 0; j < 10; j++)
    {
        printf("The value of 5 x  %d is %d\n",j+1,array[j]);
    }
    
    return 0;
}
#include <stdio.h>
int main(){
    int Marks[5];
    // scanf("%d",&Marks[0]);
    // printf("The value of Marks is %d",Marks[0]);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Marks For %d : ",i+1);   // isme marks ko 1 plus karke marks ki ordering karne ke likha hai
        scanf("%d",&Marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at value %d is %d\n",i+1,Marks[i]);
    }
    
    
    return 0;
}
#include <stdio.h>
int main(){
    // int arr[3][10];
    // int mul[3];
    // printf("Enter value of n1 : ");
    // scanf("%d",&mul[0]);
    // printf("Enter value of n2 : ");
    // scanf("%d",&mul[1]);
    // printf("Enter value of n3 : ");
    // scanf("%d",&mul[2]);
    
    int arr[3][10];
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int mul[]={n1,n2,n3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j]=mul[i]*(j+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value at arr[%d,%d] is %d\n",i,j,arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
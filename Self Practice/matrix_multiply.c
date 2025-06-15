#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2;
    printf("Enter Matrix 1 dimensions as no. of rows and no. of columns : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter Matrix 2 dimensions as no. of rows and no. of columns : ");
    scanf("%d %d",&r2,&c2);
    printf("Enter the elements of the first matrix");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("value of A %d %d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    }
    
    printf("Enter the elements of the first matrix");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("value of A %d %d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
            
        }
        
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    

    
    return 0;
}
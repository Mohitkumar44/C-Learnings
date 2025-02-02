#include <stdio.h>
int main(){
    int mat1[]= { 1,2,3,4,5,6,7,8,9};
    int mat2[]= { 1,2,3,4,5,6,7,8,9};
    int mat3[9];
    for (int i = 0; i < 9; i++)
    {
        mat3[i]=mat1[i]+mat2[i];
    }
    printf("| %d  %d  %d  |\n",mat3[0],mat3[1],mat3[2]);
    printf("| %d  %d %d |\n",mat3[3],mat3[4],mat3[5]);
    printf("| %d %d %d |\n",mat3[6],mat3[7],mat3[8]);

    return 0;
}
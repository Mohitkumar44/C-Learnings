#include <stdio.h>
int main(){
    int number;
    printf("Enter number for table : ");
    scanf("%d",&number);
    FILE *ptr;
    ptr = fopen("Table.txt","w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr,"%d X %d = %d\n",number,i,number*i);
    }
    fclose(ptr);
    return 0;
}
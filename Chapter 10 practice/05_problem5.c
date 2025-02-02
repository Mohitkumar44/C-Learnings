#include <stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr = fopen("integer.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr = fopen("integer.txt","w");
    fprintf(ptr,"%d",num*2);
    fclose(ptr);
    return 0;
}
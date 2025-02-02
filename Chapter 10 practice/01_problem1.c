#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("mohit.txt","r");
    int number1,number2,number3;
    fscanf(ptr,"%d %d %d",&number1,&number2,&number3);
    printf("%d %d %d",number1,number2,number3);
    fclose(ptr);
    return 0;
}
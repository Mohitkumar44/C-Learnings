#include <stdio.h>
int main(){
    char ch;
    printf("Enter Your character : ");
    scanf("%c",&ch);
    printf("the value of character is %d\n",ch);
    if (ch>=97&&ch<=122){
        printf("this character is lowercase");
    }
    else{
        printf("this character is not lowercase");
    }
    // printf("%d",ch);
    return 0;
}
#include <stdio.h>
int main(){
    char st[50];
    printf("Enter Your name : ");
    // scanf("%s",st);
    // both are same
    scanf("%s",&st[0]);
    printf("%s",st);
    return 0;
}
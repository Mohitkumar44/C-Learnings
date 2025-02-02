#include <stdio.h>
int main(){
    int i=7,j=89;
    int *ptr=&i;
    int *pt=&j;
    if (ptr>pt){
        printf("Yes");
    }
    return 0;
}
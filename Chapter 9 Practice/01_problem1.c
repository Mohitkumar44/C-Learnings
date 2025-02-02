#include <stdio.h>

struct vector{
    int i;
    int j;
};

int main(){
    struct vector v1 = {10, 13};    // struct vector v1;    // scanf("%d",&v1.i);    // scanf("%d",&v1.j);
    printf("%di %dj",v1.i,v1.j);
    return 0;
}
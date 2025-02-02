#include <stdio.h>
struct vector
{
    int i;
    int j;
};

struct vector sumVector(struct vector v1,struct vector v2){
    struct vector v3 = {v1.i+v2.i,v1.j+v2.j};
    return v3;
};

int main(){
    struct vector v1 = {4, 5};
    struct vector v2 = {2, 7};
    // struct vector v1;
    // scanf("%d",&v1.i);
    // scanf("%d",&v1.j);
    struct vector v3 = sumVector(v1,v2);
    printf("%di %dj",v3.i,v3.j);
    return 0;
}
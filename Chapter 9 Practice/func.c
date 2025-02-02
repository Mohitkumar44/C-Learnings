#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
void show(struct employee mk);
void show(struct employee mk){
    printf("%d %f %s",mk.code,mk.salary,mk.name);
}

int main(){
    struct employee Mohit ={786,250000,"Mohit"};
    show(Mohit);
    return 0;
}
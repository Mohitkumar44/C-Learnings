#include <stdio.h>
int main(){
    char name1[20],name2[20];
    int salary1,salary2;
    printf("enter name and salary of the employee : ");
    scanf("%s %d",&name1,&salary1);
    printf("enter name and salary of the employee : ");
    scanf("%s %d",&name2,&salary2);
    FILE *ptr;
    ptr = fopen("4.txt","w");
    fprintf(ptr,"%s, %d\n",name1,salary1);
    fprintf(ptr,"%s, %d",name2,salary2);
    return 0;
}
#include <stdio.h>

typedef struct Employee{
    int salary;
    int score;
} Employee;

int main(){
    Employee e1;
    Employee *ptr = &e1;
    ptr->salary = 30;
    ptr->score = 45;
    printf("The value of salary of employee is %d and the value of score of that employee is %d",e1.salary,e1.score);
    return 0;
}
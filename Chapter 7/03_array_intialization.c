#include <stdio.h>
int main(){
    // both lines are same
    // int cgpa[3] = {7,8,9};
    int cgpa[] = {7,8,9};
    for (int i = 0; i < 3; i++)
    {
        printf("The value of cgpa at index %d is %d\n",i,cgpa[i]);
    }
    
    return 0;
}
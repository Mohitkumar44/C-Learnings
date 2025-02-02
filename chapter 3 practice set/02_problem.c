#include <stdio.h>
int main(){
    int maths_marks,chemistry_marks,physics_marks;
    printf("Enter Marks of Phy. : ");
    scanf("%d",&physics_marks);
    printf("Enter Marks of Chem. : ");
    scanf("%d",&chemistry_marks);
    printf("Enter Marks of Maths : ");
    scanf("%d",&maths_marks);
    int perc = (physics_marks+chemistry_marks+maths_marks)/3;
    if (perc <= 40){
        printf("Result : Fail due to lesser overall percentage");
    }
    else if (maths_marks <= 33 || chemistry_marks <= 33 || physics_marks <= 33){
        printf("Result : Fail due to less marks in individual subject(s)");
    }
    else{
        printf("Result : Passed");
    }
    return 0;
}
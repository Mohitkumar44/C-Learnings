// A do while loop is executed: 
// a. At least once. 
// b. At least twice. 
// c. At most once. 

#include <stdio.h>
int main(){
    printf("\nQ. A do while loop is executed\n\na. At least once\nb. At least twice\nc. At most once\n\nEnter your answer : ");
    char ans;
    scanf(" %c",&ans);
    if (ans=='a'){
        printf("You entered correct answer");
    }
    else{
        printf("Your entered wrong answer");
    }
    return 0;
}
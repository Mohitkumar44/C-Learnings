// #include <stdio.h>
// int times(int var){
//     printf("The Ten Times of that number is %d",var*10);
//     return 0;
// }
// int main(){
//     int var;
//     printf("Enter The Value Of That Variable : ");
//     scanf("%d",&var);
//     times(var);
//     return 0;
// }

#include <stdio.h>
int times(int * var);
int times(int * var){
    *var = *var * 10;
    return 0;
}
int main(){
    int var;
    printf("Enter The Value Of That Variable : ");
    scanf("%d",&var);
    times(&var);
    printf("The 10 times of that no. is %d",var);
    return 0;
}
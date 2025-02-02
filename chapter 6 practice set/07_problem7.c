// It will not change the value of x 
// because fuction send a copy of that variable 
// and in previous question will are sending the address of that variable 
// by which it assigns a new value to that address

#include <stdio.h>
int times(int x);
int times(int x){
    x = x * 10;
    return 0;
}
int main(){
    int x;
    printf("Enter The Value Of That Variable : ");
    scanf("%d",&x);
    printf("The value of x is %d\n",x);
    times(x);
    printf("The 10 times of that no. is %d",x);
    return 0;
}
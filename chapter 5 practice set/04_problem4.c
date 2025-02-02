#include <stdio.h>
float fibo(float fb){
    if ( fb == 1 || fb == 2 ){
        return fb-1;
    }
    return fibo(fb-1)+fibo(fb-2);
}
int main(){
    float fb = 7;
    printf("The %.2f no. in series will be %.2f",fb,fibo(fb));
    return 0;
}
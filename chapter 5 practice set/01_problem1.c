#include <stdio.h>
float avrg(int a,int b,int c);
float avrg(int a,int b,int c){
    return (a+b+c)/3.0;
}
int main(){
    int a = 4,b=5,c=6;
    printf("The Average of given numbers is %.2f",avrg(a,b,c));
    return 0;
}
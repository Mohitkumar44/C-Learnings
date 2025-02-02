#include <stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}complex;
int main(){
    complex c1 ={2,4};
    printf("complex vector is %d + %di",c1.real,c1.imaginary);
    return 0;
}
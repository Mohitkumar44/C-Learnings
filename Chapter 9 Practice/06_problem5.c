#include <stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}complex;
void display(complex c){
    printf("%d + %di\n",c.real,c.imaginary);
}
int main(){
    complex comp[5];
    for (int j = 0; j < 5; j++)
    {
        printf("Enter complex number : ");
        scanf("%d %d",&comp[j].real,&comp[j].imaginary);
    }
        for (int i = 0; i < 5; i++)
    {
        display(comp[i]);
    }
    
    return 0;
}
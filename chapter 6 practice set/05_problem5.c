#include <stdio.h>
int* sum(int * first,int * second);

int* sum(int * first,int * second){
    int s = *first + *second;
    int * ptr = &s;
    printf("the sum is %d\n",s);
    return ptr;
}
float* avrg(int * fisrt,int * second);

float* avrg(int * fisrt,int * second){
    float a = (*fisrt + *second)/2.0;
    float * ptr = &a;
    printf("the average is %.2f\n",a);
    return ptr;
}

int main(){
    int first,second;
    int* ptr1;
    float* ptr2;
    printf("Enter first no. : ");
    scanf("%d",&first);
    printf("Enter second no. : ");
    scanf("%d",&second);
    ptr1 = sum(&first,&second);
    ptr2 = avrg(&first,&second);
    printf("the address of sum is %u and of average is %u",ptr1,ptr2);
    return 0;
}
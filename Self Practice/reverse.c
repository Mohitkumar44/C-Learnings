#include <stdio.h>
int main(){
    int a,b,c,x,x1;
    printf("Enter the value of a, b and c respectively such that\na is the coefficient of x square\nb is the coefficient of x\nc is the constant number : ");
    scanf("%d %d %d",&a,&b,&c);
    int d=b*b-(4*a*c);
    x=(-b+sqrt(d))/ (2*a);
    x1=(-b-sqrt(d))/ (2*a);
    printf(" %d, %d are the root of the quadric equation",x,x1 );
 
    return 0;
}
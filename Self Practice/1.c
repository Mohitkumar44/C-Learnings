#include<stdio.h>
int main(){
    int f1=0,f2=1,f3,n,i=2;
    printf("Enter the number : ");
    scanf("%d",&n);
    i=n;
    printf("%d %d ",f1,f2);
    while (i>0)
    {
        f3 = f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
        i--;
    }
    
    return 0;
}
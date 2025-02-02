#include <stdio.h>
int main(){
    int terminating_no;
    printf("Enter terminating no. : ");
    scanf("%d",&terminating_no);
    for (int i = 1; i <= terminating_no; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
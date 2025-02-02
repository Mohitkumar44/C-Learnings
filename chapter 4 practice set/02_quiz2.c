// #include <stdio.h>
// int main(){
//     int ending_no;
//     printf("Enter Termination no. : ");
//     scanf("%d",&ending_no);
//     int i = 1;
//     while (i<=ending_no){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int ending_no;
    printf("Enter terminating no. : ");
    scanf("%d",&ending_no);
    int i=1;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=ending_no);
    
    return 0;
}
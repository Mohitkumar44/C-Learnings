// #include <stdio.h>
// int main(){
//     FILE *ptr;
//     ptr = fopen("3.txt","r");
//     FILE *ptr1;
//     ptr1 = fopen("3.1.txt","w");
//     FILE *ptr2;
//     ptr2 = fopen("3.2.txt","w");
//     char a;
//     while (fscanf(ptr,"%c",&a)!=EOF)
//     {
//         fprintf(ptr1,"%c",a);
//         fprintf(ptr2,"%c",a);
//     }
//     fclose(ptr);
//     return 0;
// }



#include <stdio.h>
int main(){
    char ch;
    FILE *ptr;
    ptr = fopen("3.txt","r");
    FILE *ptr1;
    ptr1 = fopen("3.1.txt","w");
    char a;
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        else{
            fprintf(ptr1,"%c",ch);
            fprintf(ptr1,"%c",ch);
        }
    }
    fclose(ptr);
    return 0;
}
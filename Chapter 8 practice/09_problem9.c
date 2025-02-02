#include <stdio.h>
int main(){
    char c;
    int present=0;
    printf("Enter Your Character : ");
    scanf("%c",&c);
    char str[]="sdxchhgfdsdfcgvbnjhgtfdxfcgvhbjnhgytfdfcgvhbnjhgytffcgvb";
    int j=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==c)
        {
            present = 1;
            break;
        }
        
    }
    if (present)
    {
        printf("Present");
    }
    else{
        printf("Not Present");
    }
    
    return 0;
}